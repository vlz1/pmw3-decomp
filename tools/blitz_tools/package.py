import struct
from dataclasses import dataclass

PACKAGE_INDEX_120_LE_STRUCT = struct.Struct("<IIII III IIIIIIIII")
PACKAGE_INDEX_120_BE_STRUCT = struct.Struct(">IIII III IIIIIIIII")
FILE_INDEX_ENTRY_LE_STRUCT = struct.Struct("<IIIIIIQ")
FILE_INDEX_ENTRY_BE_STRUCT = struct.Struct(">IIIIIIQ")

@dataclass
class PackageIndex:
    id: int = 0
    pau_size: int = 0
    flags: int = 0
    noof_files: int = 0
    index_offset: int = 0
    tag_offset: int = 0
    noof_tags: int = 0
    block_map_offset: int = 0
    block_map_size: int = 0
    filename_table_offset: int = 0
    filename_table_size: int = 0
    index_size: int = 0
    start_sector: int = 0
    build_number: int = 0
    noof_files_using_dma: int = 0

    @staticmethod
    def from_little_endian_bytes(data: bytes) -> PackageIndex:
        return PackageIndex.from_values(PACKAGE_INDEX_120_LE_STRUCT.unpack(data[:PACKAGE_INDEX_120_LE_STRUCT.size]))

    @staticmethod
    def from_big_endian_bytes(data: bytes) -> PackageIndex:
        return PackageIndex.from_values(PACKAGE_INDEX_120_BE_STRUCT.unpack(data[:PACKAGE_INDEX_120_BE_STRUCT.size]))

    @staticmethod
    def from_values(values: tuple) -> PackageIndex:
        header = PackageIndex()
        header.id = values[0]
        header.pau_size = values[1]
        header.flags = values[2]
        header.noof_files = values[3]
        header.index_offset = values[4]
        header.tag_offset = values[5]
        # values[6] is just padding/placeholder
        header.noof_tags = values[7]
        header.block_map_offset = values[8]
        header.block_map_size = values[9]
        header.filename_table_offset = values[10]
        header.filename_table_size = values[11]
        header.index_size = values[12]
        header.start_sector = values[13]
        header.build_number = values[14]
        header.noof_files_using_dma = values[15]
        return header
    
@dataclass
class FileIndexEntry:
    offset: int = 0
    crc: int = 0
    size: int = 0
    filename_offset: int = 0
    noof_tags: int = 0
    tag_offset: int = 0
    file_time: int = 0

    @staticmethod
    def from_little_endian_bytes(data: bytes) -> FileIndexEntry:
        return FileIndexEntry.from_values(FILE_INDEX_ENTRY_LE_STRUCT.unpack(data))

    @staticmethod
    def from_big_endian_bytes(data: bytes) -> FileIndexEntry:
        return FileIndexEntry.from_values(FILE_INDEX_ENTRY_BE_STRUCT.unpack(data))

    @staticmethod
    def from_values(values: tuple) -> FileIndexEntry:
        entry = FileIndexEntry()
        entry.offset = values[0]
        entry.crc = values[1]
        entry.size = values[2]
        entry.filename_offset = values[3]
        entry.noof_tags = values[4]
        entry.tag_offset = values[5]
        entry.file_time = values[6]
        return entry

@dataclass
class PackagedFile:
    name: str
    offset: int
    size: int
    crc: int
    tag_offset: int
    tag_count: int
    file_time: int

class Package:
    def __init__(self, path: str, big_endian: bool):
        self.path = path
        self.big_endian = big_endian
        self.package_index = PackageIndex()
        self.files: list[PackagedFile] = []

    def __enter__(self):
        self.open()
        return self

    def __exit__(self, exc_type, exc, tb):
        self.close()
        if exc_type is not None:
            return False

    def open(self):
        self.fp = open(self.path, "rb")
        self.version = self.get_build_number()
        if self.version != 120:
            raise ValueError(f"Expected package build number 120, got {self.version}")

        # Read header/package index
        self.fp.seek(0)
        package_index_bytes = self.fp.read(2048)
        if self.big_endian:
            self.package_index = PackageIndex.from_big_endian_bytes(package_index_bytes)
        else:
            self.package_index = PackageIndex.from_little_endian_bytes(package_index_bytes)

        # Read filename table
        self.fp.seek(self.package_index.filename_table_offset * self.package_index.pau_size)
        self.filename_table = self.fp.read(self.package_index.filename_table_size)

        # Read file index
        self.fp.seek(self.package_index.index_offset * self.package_index.pau_size)
        index_data = self.fp.read(32 * self.package_index.noof_files)
        for i in range(self.package_index.noof_files):
            start = i * 32
            entry_bytes = index_data[start:start + 32]
            file_entry: FileIndexEntry
            if self.big_endian:
                file_entry = FileIndexEntry.from_big_endian_bytes(entry_bytes)
            else:
                file_entry = FileIndexEntry.from_little_endian_bytes(entry_bytes)
            self.files.append(PackagedFile(
                name=self.get_filename(file_entry.filename_offset),
                offset=file_entry.offset * self.package_index.pau_size,
                size=file_entry.size,
                crc=file_entry.crc,
                tag_offset=file_entry.tag_offset,
                tag_count=file_entry.noof_tags,
                file_time=file_entry.file_time
            ))

    def close(self):
        if self.fp is not None:
            self.fp.close()

    def get_build_number(self) -> int:
        self.fp.seek(0x38)
        return int.from_bytes(self.fp.read(4), byteorder=("big" if self.big_endian else "little"))

    def get_filename(self, offset: int):
        data = self.filename_table[offset:]
        end_index = data.find(b"\x00")
        if end_index != -1:
            return data[:end_index].decode("utf-8")
        return data.decode("utf-8")
