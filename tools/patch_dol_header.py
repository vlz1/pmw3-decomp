import struct
import argparse
import hashlib

# 
# This game has a combined .ctors/.dtors section, which causes problems with dtk.
# Specifically, it gives this error: "Section out of bounds: .sdata2 (index 9), object has 9 sections"
# To fix this, we split the .ctors and .dtors sections in the DOL header.
#

parser = argparse.ArgumentParser(description="Patch Pac-Man World 3 DOL header to split .ctor and .dtor sections")
parser.add_argument("dol_in")
parser.add_argument("dol_out")
args = parser.parse_args()

dol_header = struct.Struct(">IIIIIII IIIIIIIIIII IIIIIII IIIIIIIIIII IIIIIII IIIIIIIIIII II I IIIIIII")

with open(args.dol_in, "rb") as f:
    data = f.read()

GP8EAF_original = "226E5B2F1EF9A0FD565AE7D6D594C73A4C1E8D48"
sha1 = hashlib.sha1(data).hexdigest().upper()
if sha1 != GP8EAF_original:
    print("ERROR: SHA1 mismatch")
    print(f"EXPECTED: {GP8EAF_original}")
    print(f"GOT:      {sha1}")
    exit(1)

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

with open(args.dol_out, "wb") as f:
    f.write(dol_header.pack(*new_values))
    f.write(data[256:])
