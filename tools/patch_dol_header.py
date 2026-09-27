import struct
import argparse
import hashlib

# 
# This game has a combined .ctors/.dtors section, which causes problems with dtk.
# Specifically, it gives this error: "Section out of bounds: .sdata2 (index 9), object has 9 sections"
# To fix this, we split the .ctors and .dtors sections in the DOL header.
#

def patch_dol_header(in_path: str, out_path: str | None = None) -> bool:
    if out_path is None:
        out_path = in_path

    dol_header = struct.Struct(">IIIIIII IIIIIIIIIII IIIIIII IIIIIIIIIII IIIIIII IIIIIIIIIII II I IIIIIII")

    with open(in_path, "rb") as f:
        data = f.read()

    GP8EAF_original = "226E5B2F1EF9A0FD565AE7D6D594C73A4C1E8D48"
    GP8EAF_patched = "487CACFF357AE963E265D82F4D0EE1D6CAA3D9CE"
    sha1 = hashlib.sha1(data).hexdigest().upper()
    if sha1 == GP8EAF_patched:
        return True
    elif sha1 != GP8EAF_original:
        print("ERROR: SHA1 mismatch")
        print(f"EXPECTED: {GP8EAF_original}")
        print(f"GOT:      {sha1}")
        return False

    # Parse header
    new_values = list(dol_header.unpack(data[:dol_header.size]))

    # Add file offset for .dtors
    new_values[12] = new_values[11]
    new_values[11] = new_values[10]
    new_values[10] = new_values[9]
    new_values[9] = new_values[8]
    new_values[8] = 0x36D160

    # Add load address for .dtors
    new_values[30] = new_values[29]
    new_values[29] = new_values[28]
    new_values[28] = new_values[27]
    new_values[27] = new_values[26]
    new_values[26] = 0x80370160

    # Split the combined .ctors/.dtors section (64 bytes) into two 32 byte sections
    new_values[48] = new_values[47]
    new_values[47] = new_values[46]
    new_values[46] = new_values[45]
    new_values[45] = new_values[44]
    new_values[43] = 0x20
    new_values[44] = 0x20

    with open(out_path, "wb") as f:
        f.write(dol_header.pack(*new_values))
        f.write(data[256:])

    return True

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Patch Pac-Man World 3 DOL header to split .ctor and .dtor sections")
    parser.add_argument("dol_in")
    parser.add_argument("dol_out")
    args = parser.parse_args()
    if not patch_dol_header(args.dol_in, args.dol_out):
        exit(1)
