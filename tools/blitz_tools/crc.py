POLYNOMIAL: int = 0x4C11DB7

def init_crc_table(polynomial: int) -> list[int]:
    table: list[int] = [0] * 256
    for i in range(256):
        c = i << 24
        for j in range(8):
            if c & 0x80000000:
                c = polynomial ^ (c << 1)
            else:
                c <<= 1
            c &= 0xFFFFFFFF
        table[i] = c
    return table

CRC_TABLE: list[int] = init_crc_table(POLYNOMIAL)

def data_crc(data: bytes, crc: int = 0):
    for c in data:
        crc = ((crc << 8) ^ CRC_TABLE[(crc >> 24) ^ c]) & 0xFFFFFFFF
    return crc

def string_crc(string: str, crc: int = 0) -> int:
    return data_crc(string.encode("utf-8"))
