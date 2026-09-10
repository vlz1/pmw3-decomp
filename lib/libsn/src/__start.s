.set r0, 0
.set r1, 1
.set r2, 2
.set r3, 3
.set r4, 4
.set r5, 5
.set r6, 6
.set r7, 7
.set r8, 8
.set r9, 9
.set r10, 10
.set r11, 11
.set r12, 12
.set r13, 13
.set r29, 29
.set r30, 30
.set r31, 31

.section .init
.balign 4

.global __start
.type __start, @function
__start:
    lis r1, _stack_addr@h
    ori r1, r1, _stack_addr@l
    lis r2, _SDA2_BASE_@h
    ori r2, r2, _SDA2_BASE_@l
    lis r13, _SDA_BASE_@h
    ori r13, r13, _SDA_BASE_@l
    bl __init_hardware

    li r0, -0x1
    stwu r1, -0x8(r1)
    stw r0, 0x4(r1)
    stw r0, 0x0(r1)

    /* Clear bss */
    lis r3, __bss_start@h
    ori r3, r3, __bss_start@l
    li r4, 0x0
    lis r5, __bss_end@h
    ori r5, r5, __bss_end@l
    subf r5, r3, r5
    bl memset

    /* Clear sbss */
    lis r3, __sbss_start@h
    ori r3, r3, __sbss_start@l
    li r4, 0x0
    lis r5, __sbss_end@h
    ori r5, r5, __sbss_end@l
    subf r5, r3, r5
    bl memset

    /* Set debugger exception mask (0x80000044) to zero */
    li r4, 0x0
    lis r5, 0x8000
    stw r4, 0x44(r5)

    /* Get address of BI2 */
    li r29, 0x0
    lis r6, 0x8000
    ori r6, r6, 0xF4
    lwz r6, 0x0(r6)
    cmpwi r6, 0x0
    beq 1f

    lwz r3, 0xC(r6)
    cmplwi r3, 0x2
    blt 1f
    bl SNDebugInit
    li r29, 0x1
1:
    bl _ParseCmdLine
    mr r30, r3
    mr r31, r4

    bl DBInit
    bl OSInit
    bl __init_user

    cmpwi r29, 0x0
    beq 2f

    lis r3, wdbmsg@h
    ori r3, r3, wdbmsg@l
    bl OSReport

    mfmsr r5
    ori r4, r5, 0x8000
    xori r4, r4, 0x8000
    mtmsr r4

    sync

    ori r5, r5, 0x200
    mtsrr1 r5

    lis r4, 2f@h
    ori r4, r4, 2f@l
    mtsrr0 r4
    rfi
2:
    mr r3, r30
    mr r4, r31

    bl main
    b exit

.global _ParseCmdLine
.type _ParseCmdLine, @function
_ParseCmdLine:
    lis r6, 0x8000
    ori r6, r6, 0xF4
    lwz r5, 0x0(r6)
    cmpwi r5, 0x0
    bne _gargs
_noargs:
    li r3, 0x0
    li r4, 0x0
    blr
_gargs:
    lwz r6, 0x8(r5)
    cmpwi r6, 0x0
    beq _noargs
    add r6, r5, r6
    lwz r3, 0x0(r6)
    cmpwi r3, 0x0
    beq _noargs
    addi r4, r6, 0x4
    mtctr r3
_lp:
    addi r6, r6, 0x4
    lwz r7, 0x0(r6)
    add r7, r7, r5
    stw r7, 0x0(r6)
    bdnz _lp
    
    lis r5, 0x8000
    ori r5, r5, 0x34
    clrrwi r7, r4, 5
    stw r7, 0x0(r5)
    blr

.data
wdbmsg:
    .string "Waiting for SN Debugger...\n"
    .long 0
