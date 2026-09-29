# Packages

Game resources are bundled into platform-specific package files.

On the GameCube, these are `.gcp` files, which are big-endian. And on the PS2, these are `.ps2` files, which are little-endian.

The exact format depends on the engine version they were built for, which is indicated by the `buildNumber` field in the `TBPackageIndex` structure.

## Header

The header (`TBPackageIndex`) always occupies the first 2048 bytes of the package file.

`pauSize` - Block size for computing various offsets. This is always a power of 2. PAU might stand for Package Allocation Unit, or Package Alignment Unit or something.

`noofFiles` - Number of files in the package.

`indexOffset` - Offset (in PAUs) of the file index. Multiply by `pauSize` to find the actual offset relative to the beginning of the file.

`indexSize` - Size in bytes of the file index.

`tagOffset` - Offset (in PAUs) of the resource tags. Multiply by `pauSize` to find the actual offset relative to the beginning of the file.

`noofTags` - Number of 4-byte resource tags.

`filenameTableOffset` - Offset (in PAUs) of the resource tags. Multiply by `pauSize` to find the actual offset relative to the beginning of the file.

`buildNumber` - Major version of Babel that this package was built for. For example, Pac-Man World 3 on the GameCube uses Babel 120.0.216, so this field will be 120 in its packages.

## Filename Table

The filename table is just a blob of null-terminated ASCII strings.

## File Tags

WIP

## File Index

The index is a list of `TBPackageIndex::noofFiles` `TBFileIndex` structures, sorted by ascending CRC.

To find the real offset of a file's data, multiply the `offset` field by `TBPackageIndex::pauSize`.

To get the file's name, use `filenameOffset` as a byte offset relative to the beginning of the filename table.

## Structures (Build 120)

```c
struct TBPackageID
{
    unsigned int crc : 31;
    unsigned int loaded : 1;
};

struct TBPackageIndex
{
    TBPackageID id; // offset 0x0, size 0x4
    unsigned int pauSize; // offset 0x4, size 0x4
    unsigned int flags; // offset 0x8, size 0x4
    int noofFiles; // offset 0xC, size 0x4
    unsigned int indexOffset; // offset 0x10, size 0x4
    unsigned int tagOffset; // offset 0x14, size 0x4
    unsigned int pad0; // offset 0x18, size 0x4
    int noofTags; // offset 0x1C, size 0x4
    int blockMapOffset; // offset 0x20, size 0x4
    int blockMapSize; // offset 0x24, size 0x4
    unsigned int filenameTableOffset; // offset 0x28, size 0x4
    unsigned int filenameTableSize; // offset 0x2C, size 0x4
    unsigned int indexSize; // offset 0x30, size 0x4
    unsigned int startSector; // offset 0x34, size 0x4
    unsigned int buildNumber; // offset 0x38, size 0x4
    unsigned int noofFilesUsingDMA; // offset 0x3C, size 0x4
};

struct TBFileIndex
{
    int offset; // offset 0x0, size 0x4
    unsigned int crc; // offset 0x4, size 0x4
    int size; // offset 0x8, size 0x4
    unsigned int filenameOffset; // offset 0xC, size 0x4
    unsigned int noofTags; // offset 0x10, size 0x4
    unsigned int tagOffset; // offset 0x14, size 0x4
    unsigned long long fileTime; // offset 0x18, size 0x8
};
```
