ENTRY(__start)
PROVIDE(_ctors = 0x803B65B8);
PROVIDE(_dtors = 0x80370160);
SECTIONS
{
    .init 0x80003100 :
    {
        *(.init)
    } = 0

    . = ALIGN(32);
	.text :
    {
        *(.text)
        *(.gnu.warning)
        *(.gnu.linkonce.t*)
    } = 0

    . = ALIGN(16);
    .ctors : 
    { 
        __CTOR_LIST__ = .;
        LONG(-1);
        *(.ctors)
        LONG(0);
        /* PROVIDE (__CTOR_END__ = .); */
    }

    . = ALIGN(1);
    .dtors : 
    { 
        __DTOR_LIST__ = .;
        LONG(-1);
        *(.dtors)
        LONG(0);
        /* PROVIDE (__DTOR_END__ = .); */
    }

    . = ALIGN(32);
    extabindex :
	{
        *(extabindex)
    }

    . = ALIGN(32);
    extab :
    {
        *(extab)
    }
    . = ALIGN(8);
    .rodata	: 
    {
        *(.rodata) *(.gnu.linkonce.r*) *(.rodata.*)
    }
    . = ALIGN(32);
    .data :
    {
        *(.data)
        *(.data.*)
        *(.gnu.linkonce.d*)
    }
    . = ALIGN(32);
    .bss :
    {
        _f_bss = .;
        __bss_start = .;
        *(.dynbss)
        *(.bss)
        *(.bss.*)
        *(COMMON)
        __bss_end = .;
        _e_bss = .;
    }
    . = ALIGN(32);
    .sdata :
    {
        __SDATA_START__ = .;
        _SDA_BASE_ = . + 0x8000; 
        _SDA2_BASE_ = . + 0x18000;
        *(.sdata) 
        *(.sdata.*)
    }
    . = ALIGN(8);
    .sbss :
    {
        _f_sbss = .;
        __sbss_start = .;
        *(.sbss)
        *(.sbss.*)
        *(.scommon)
        *(.dynsbss)
        __sbss_end = .;
        _e_sbss = .;
        __SBSS_END__ = .;
    }
    . = ALIGN(32);
    .sdata2 :
    {
        __SDATA2_START__ = .;
        *(.sdata2)
        *(.sdata2.*)
    }
    .sbss2 :
    {
        *(.sbss2)
        *(.sbss2.*)
        __SBSS2_END__ = .;
    }

    . = 0x80490AE0;
    _stack_end = .;
    . += 0x10000;
    _stack_addr = .;
    . += 16;

    . = ALIGN(32);
    __ArenaLo = .;

    . = 0x81780000;
	__ArenaHi = .;
}
