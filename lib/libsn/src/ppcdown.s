.include "macros.inc"
.file "ppcdown.s"

.text
.balign 4

/* "ppcdown.s" is present in .strtab, so this is definitely assembly */

.fn SNMemCpy, global
    blr
.endfn SNMemCpy

.fn DBcallback, global
    blr
.endfn DBcallback

.fn EnableMetroTRKInterrupts, global
    blr
.endfn EnableMetroTRKInterrupts

.fn SNDebugInit, global
    blr
.endfn SNDebugInit

.fn SNDebugBoot, global
    blr
.endfn SNDebugBoot

.fn ISIentry, global
    blr
.endfn ISIentry

.fn DSIentry, global
    blr
.endfn DSIentry

.fn IsDevLink, global
    blr
.endfn IsDevLink

.data
.balign 8

.obj indebugger, local
    .long 1
.endobj indebugger

.obj context, local
    .long 0
.endobj context

.obj SN_ISI
    .long 1
.endobj SN_ISI

.obj SN_DSI
    .long 1
.endobj SN_DSI

.obj intmodemsg, local
    .string "\nInt mode enabled\n"
    .byte 0
.endobj intmodemsg

.obj ddhjmp, local
    .long EXI2_Init
    .long EXI2_EnableInterrupts
    .long EXI2_Poll
    .long EXI2_ReadN
    .long EXI2_WriteN
    .long EXI2_Reserve
    .long EXI2_Unreserve
.endobj ddhjmp

.obj gdevjmp, local
    .long DBInitComm
    .long DBInitInterrupts
    .long DBQueryData
    .long DBRead
    .long DBWrite
    .long DBOpen
    .long DBClose
.endobj gdevjmp

.obj proviewjmp, local
    .long SNInitComm
    .long SNInitInterrupts
    .long SNQueryData
    .long SNRead
    .long SNWrite
    .long SNOpen
    .long SNClose
.endobj proviewjmp

.obj PPCHaltData, local
    .long 0x7C0004AC
    .long 0x60000000
    .long 0x38600000
    .long 0x60000000
    .long 0x4BFFFFF4
    .long 0xFFFFFFFF
.endobj PPCHaltData

.obj cmderrstr, local
    .string "*** CMD READ ERROR ***\n"
    .byte 0
.endobj cmderrstr

.obj cmderrstr2, local
    .string "*** BAD COMMAND ***\n"
    .byte 0
.endobj cmderrstr2

.obj waitstr, local
    .string "WAIT...\n"
    .byte 0
.endobj waitstr

.obj pausetext, local
    .string "snPause() : Stopped.\n"
    .byte 0
.endobj pausetext

.obj commserror, local
    .string "Comms Error\n"
    .byte 0, 0, 0
.endobj commserror

.obj exception_notification_packet, local
    .long 0x07000000
    .long 0
.endobj exception_notification_packet

.bss
.balign 8

.obj SNworkspace
    .skip 34560
.endobj SNworkspace
