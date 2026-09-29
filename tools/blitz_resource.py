import os
import struct
import argparse
from blitz_tools.package import Package
from blitz_tools.crc import data_crc, string_crc

with Package("orig/GP8EAF/files/AllPaks.gcp", True) as package:
    for f in package.files:
        print(f)
