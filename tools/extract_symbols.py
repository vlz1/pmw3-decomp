import re
import os
import argparse

parser = argparse.ArgumentParser(description="Extract symbols from an ELF and format them into symbols.txt for dtk")
parser.add_argument("section_headers", type=str, help="Section header dump from readelf -S")
parser.add_argument("symbol_dump", type=str, help="Symbol dump from readelf -Ws")
parser.add_argument("output", type=str, help="Output file")
parser.add_argument("-s", "--section", type=str, help="Only output symbols for a particular section")
args = parser.parse_args()

section_limit = False
if args.section is not None:
    section_limit = True

section_pattern = re.compile(r'\[ *(\d+)\] +(\.\w+) +(\w+)')
symbol_pattern = re.compile(r'(\d+): +([0-9a-fA-F]+) +(\d+) +(\w+) +(\w+) +(\w+) +([\d\w]+) +([^\r\n]+)')

sections = [{
    "index": 0,
    "name": "",
    "type": "NULL"
}]

with open(args.section_headers, "rb") as f:
    section_dump = f.read().decode("utf-8")
    for match in section_pattern.finditer(section_dump):
        sections.append({
            "index": int(match.group(1)),
            "name":  match.group(2),
            "type":  match.group(3),
        })

symbols = []
with open(args.symbol_dump, "rb") as f:
    symbol_dump = f.read().decode("utf-8")
    for match in symbol_pattern.finditer(symbol_dump):
        sym_type = match.group(4)
        if sym_type == "SECTION":
            continue

        section_idx = match.group(7)
        if section_idx == "ABS":
            continue
        section = sections[int(section_idx)]
        if section["name"].startswith(".debug"):
            continue
        if section["type"] == "STRTAB" or section["type"] == "SYMTAB":
            continue
        if section_limit:
            if section["name"] != args.section:
                continue

        symbols.append({
            "index":   int(match.group(1)),
            "value":   int(match.group(2), 16),
            "size":    int(match.group(3)),
            "type":    sym_type,
            "scope":   match.group(5),
            "vis":     match.group(6),
            "section": section["name"],
            "name":    match.group(8)
        })

with open(args.output, "wb") as f:
    for sym in symbols:
        sym_name = sym["name"]
        sym_type = ""
        if sym["type"] == "OBJECT":
            sym_type = "object"
        elif sym["type"] == "FUNC":
            sym_type = "function"
        elif sym["type"] == "NOTYPE":
            sym_type = "label"
        else:
            print(f"Skipping \"{sym_name}\": Unknown type \"{sym['type']}\"")
            continue

        sym_scope = ""
        if sym["scope"] == "GLOBAL":
            sym_scope = "global"
        elif sym["scope"] == "LOCAL":
            sym_scope = "local"
        elif sym["scope"] == "WEAK":
            sym_scope = "weak"
        else:
            print(f"Skipping \"{sym_name}\": Unknown scope \"{sym['scope']}\"")
            continue
        
        sym_size = hex(sym["size"])
        sym_value = hex(sym["value"])

        if sym_type == "label":
            f.write(f"{sym_name} = {sym['section']}:{sym_value}; // type:{sym_type} scope:{sym_scope}\n".encode("utf-8"))
        else:
            f.write(f"{sym_name} = {sym['section']}:{sym_value}; // type:{sym_type} size:{sym_size} scope:{sym_scope}\n".encode("utf-8"))
