/* FreeMS2 - the open source engine management system
 *
 * Copyright 2008, 2009 Fred Cooke
 *
 * This file is part of the FreeMS2 project.
 *
 * FreeMS2 software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * FreeMS2 software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with any FreeMS2 software.  If not, see http://www.gnu.org/licenses/
 *
 * We ask that if you make any changes to this file you email them upstream to
 * us at admin(at)diyefi(dot)org or, even better, fork the code on github.com!
 *
 * Thank you for choosing FreeMS2 to run your engine!
 */


/**	@file 9S12C128.h
 * @ingroup allHeaders
 * @ingroup globalHeaders
 *
 * @brief MC9S12C128 register definitions
 *
 * This is the device header for the FreeScale MC9S12C128 MCU. It contains
 * declarations that allow access to all of the devices control registers.
 *
 * These are the full basic register definitions for the Freescale 9S12C128
 * processor as taken from MC9S12C128V1.pdf Chapter 1, section 1.2.2.
 *
 * @author Fred Cooke
 */


/* see if we've seen this, if not, mark seen and process */
#ifndef FILE_9S12C128_H_SEEN
#define FILE_9S12C128_H_SEEN


/* shortcuts to speed formatting */
/* www.atmel.com/dyn/resources/prod_documents/avr_3_04.pdf First page, second column */
/* http://www.ee.nmt.edu/~rison/ee308_spr06/homepage.html */
/* extra parentheses for clarity and guarantee of precedence */

/* Dereferenced Volatile Unsigned Char Pointer */
#define DVUCP(address) (*((volatile unsigned char*)(address)))
/* Dereferenced Volatile Unsigned Short Pointer */
#define DVUSP(address) (*((volatile unsigned short*)(address)))

/* Address Volatile Unsigned Char Pointer */
#define AVUCP(address) ((volatile unsigned char*)(address))
/* Address Volatile Unsigned Short Pointer */
#define AVUSP(address) ((volatile unsigned short*)(address))



/*
0x0000 PORTA
0x0001 PORTB
0x0002 DDRA
0x0003 DDRB
0x0004 Reserved
0x0005 Reserved
0x0006 Reserved
0x0007 Reserved
0x0008 PORTE
Read:
Bit 7 6 5 4 3 2
Bit 1 Bit 0
Write:
0x0009 DDRE
Read:
Bit 7 6 5 4 3 Bit 2
0 0
Write:
0x000A PEAR
Read:
NOACCE
0
PIPOE NECLK LSTRE RDWE
0 0
Write:
0x000B MODE
Read:
MODC MODB MODA
0
IVIS
0
EMK EME
Write:
0x000C PUCR
Read:
PUPKE
0 0
PUPEE
0 0
PUPBE PUPAE
Write:
0x000D RDRIV
Read:
RDPK
0 0
RDPE
0 0
RDPB RDPA
Write:
0x000E EBICTL
Read: 0 0 0 0 0 0 0
ESTR
Write:
0x000F Reserved
Read: 0 0 0 0 0 0 0 0
Write:
Chapter 1 MC9S12C and MC9S12GC Device Overview (MC9S12C128)
28 MC9S12C-Family / MC9S12GC-Family Freescale Semiconductor
Rev 01.24
0x0010Ð0x0014 MMC Map 1 of 4 (HCS12 Module Mapping Control)
Address Name Bit 7 Bit 6 Bit 5 Bit 4 Bit 3 Bit 2 Bit 1 Bit 0
0x0010 INITRM
Read:
RAM15 RAM14 RAM13 RAM12 RAM11
0 0
RAMHAL
Write:
0x0011 INITRG
Read: 0
REG14 REG13 REG12 REG11
0 0 0
Write:
0x0012 INITEE
Read:
EE15 EE14 EE13 EE12 EE11
0 0
EEON
Write:
0x0013 MISC
Read: 0 0 0 0
EXSTR1 EXSTR0 ROMHM ROMON
Write:
0x0014 Reserved
Read: 0 0 0 0 0 0 0 0
Write:
0x0015Ð0x0016 INT Map 1 of 2 (HCS12 Interrupt)
Address Name Bit 7 Bit 6 Bit 5 Bit 4 Bit 3 Bit 2 Bit 1 Bit 0
0x0015 ITCR
Read: 0 0 0
WRINT ADR3 ADR2 ADR1 ADR0
Write:
0x0016 ITEST
Read:
INTE INTC INTA INT8 INT6 INT4 INT2 INT0
Write:
0x0017Ð0x0017 MMC Map 2 of 4 (HCS12 Module Mapping Control)
Address Name Bit 7 Bit 6 Bit 5 Bit 4 Bit 3 Bit 2 Bit 1 Bit 0
0x0017 Reserved
Read: 0 0 0 0 0 0 0 0
Write:
0x0018Ð0x0018 Miscellaneous Peripherals (Device User Guide)
Address Name Bit 7 Bit 6 Bit 5 Bit 4 Bit 3 Bit 2 Bit 1 Bit 0
0x0018 Reserved
Read: 0 0 0 0 0 0 0 0
Write:
0x0019Ð0x0019 VREG3V3 (Voltage Regulator)
Address Name Bit 7 Bit 6 Bit 5 Bit 4 Bit 3 Bit 2 Bit 1 Bit 0
$0019 VREGCTRL
Read: 0 0 0 0 0 LVDS
LVIE LVIF
Write:
Chapter 1 MC9S12C and MC9S12GC Device Overview (MC9S12C128)
Freescale Semiconductor MC9S12C-Family / MC9S12GC-Family 29
Rev 01.24
0x001AÐ0x001B Miscellaneous Peripherals (Device User Guide)
Address Name Bit 7 Bit 6 Bit 5 Bit 4 Bit 3 Bit 2 Bit 1 Bit 0
0x001A PARTIDH
Read: ID15 ID14 ID13 ID12 ID11 ID10 ID9 ID8
Write:
0x001B PARTIDL
Read: ID7 ID6 ID5 ID4 ID3 ID2 ID1 ID0
Write:
0x001CÐ0x001D MMC Map 3 of 4 (HCS12 Module Mapping Control, Device User Guide)
Address Name Bit 7 Bit 6 Bit 5 Bit 4 Bit 3 Bit 2 Bit 1 Bit 0
0x001C MEMSIZ0
Read: reg_sw0 0 eep_sw1 eep_sw0 0 ram_sw2 ram_sw1 ram_sw0
Write:
0x001D MEMSIZ1
Read: rom_sw1 rom_sw0 0 0 0 0 pag_sw1 pag_sw0
Write:
0x001EÐ0x001E MEBI Map 2 of 3 (HCS12 Multiplexed External Bus Interface)
Address Name Bit 7 Bit 6 Bit 5 Bit 4 Bit 3 Bit 2 Bit 1 Bit 0
0x001E INTCR
Read:
IRQE IRQEN
0 0 0 0 0 0
Write:
0x001FÐ0x001F INT Map 2 of 2 (HCS12 Interrupt)
Address Name Bit 7 Bit 6 Bit 5 Bit 4 Bit 3 Bit 2 Bit 1 Bit 0
0x001F HPRIO
Read:
PSEL7 PSEL6 PSEL5 PSEL4 PSEL3 PSEL2 PSEL1
0
Write:
0x0020Ð0x002F DBG (Including BKP) Map 1 of 1 (HCS12 Debug)
Address Name Bit 7 Bit 6 Bit 5 Bit 4 Bit 3 Bit 2 Bit 1 Bit 0
0x0020 DBGC1
Read:
DBGEN ARM TRGSEL BEGIN DBGBRK
0
CAPMOD
Write:
0x0021 DBGSC
Read: AF BF CF 0
TRG
Write:
0x0022 DBGTBH
Read: Bit 15 Bit 14 Bit 13 Bit 12 Bit 11 Bit 10 Bit 9 Bit 8
Write:
0x0023 DBGTBL
Read: Bit 7 Bit 6 Bit 5 Bit 4 Bit 3 Bit 2 Bit 1 Bit 0
Write:
0x0024 DBGCNT
Read: TBF 0 CNT
Write:
0x0025 DBGCCX
Read:
PAGSEL EXTCMP
Write:
Chapter 1 MC9S12C and MC9S12GC Device Overview (MC9S12C128)
30 MC9S12C-Family / MC9S12GC-Family Freescale Semiconductor
Rev 01.24
0x0026 DBGCCH
Read:
Bit 15 14 13 12 11 10 9 Bit 8
Write:
0x0027 DBGCCL
Read:
Bit 7 6 5 4 3 2 1 Bit 0
Write:
0x0028 DBGC2
Read:
BKABEN FULL BDM TAGAB BKCEN TAGC RWCEN RWC
BKPCT0 Write:
0x0029 DBGC3
Read:
BKAMBH BKAMBL BKBMBH BKBMBL RWAEN RWA RWBEN RWB
BKPCT1 Write:
0x002A DBGCAX
Read:
PAGSEL EXTCMP
BKP0X Write:
0x002B DBGCAH
Read:
Bit 15 14 13 12 11 10 9 Bit 8
BKP0H Write:
0x002C DBGCAL
Read:
Bit 7 6 5 4 3 2 1 Bit 0
BKP0L Write:
0x002D DBGCBX
Read:
PAGSEL EXTCMP
BKP1X Write:
0x002E DBGCBH
Read:
Bit 15 14 13 12 11 10 9 Bit 8
BKP1H Write:
0x002F DBGCBL
Read:
Bit 7 6 5 4 3 2 1 Bit 0
BKP1L Write:
0x0030Ð0x0031 MMC Map 4 of 4 (HCS12 Module Mapping Control)
Address Name Bit 7 Bit 6 Bit 5 Bit 4 Bit 3 Bit 2 Bit 1 Bit 0
0x0030 PPAGE
Read: 0 0
PIX5 PIX4 PIX3 PIX2 PIX1 PIX0
Write:
0x0031 Reserved
Read: 0 0 0 0 0 0 0 0
Write:
0x0032Ð0x0033 MEBI Map 3 of 3 (HCS12 Multiplexed External Bus Interface)
Address Name Bit 7 Bit 6 Bit 5 Bit 4 Bit 3 Bit 2 Bit 1 Bit 0
0x0032 PORTK(1)
1. Only applicable in special emulation-only bond outs, for emulation of extended memory map.
Read:
Bit 7 6 5 4 3 2 1 Bit 0
Write:
0x0033 DDRK1
Read:
Bit 7 6 5 4 3 2 1 Bit 0
Write:
Address Name Bit 7 Bit 6 Bit 5 Bit 4 Bit 3 Bit 2 Bit 1 Bit 0
$0032 Reserved
Read: 0 0 0 0 0 0 0 0
Write:
$0033 Reserved
Read: 0 0 0 0 0 0 0 0
Write:
0x0020Ð0x002F DBG (Including BKP) Map 1 of 1 (HCS12 Debug) (continued)
Address Name Bit 7 Bit 6 Bit 5 Bit 4 Bit 3 Bit 2 Bit 1 Bit 0
Chapter 1 MC9S12C and MC9S12GC Device Overview (MC9S12C128)
Freescale Semiconductor MC9S12C-Family / MC9S12GC-Family 31
Rev 01.24
ep0x0040-0x006F TIM
0x0034Ð0x003F CRG (Clock and Reset Generator)
Address Name Bit 7 Bit 6 Bit 5 Bit 4 Bit 3 Bit 2 Bit 1 Bit 0
0x0034 SYNR
Read: 0 0
SYN5 SYN4 SYN3 SYN2 SYN1 SYN0
Write:
0x0035 REFDV
Read: 0 0 0 0
REFDV3 REFDV2 REFDV1 REFDV0
Write:
0x0036
CTFLG
TEST ONLY
Read: TOUT7 TOUT6 TOUT5 TOUT4 TOUT3 TOUT2 TOUT1 TOUT0
Write:
0x0037 CRGFLG
Read:
RTIF PORF LVRF LOCKIF
LOCK TRACK
SCMIF
SCM
Write:
0x0038 CRGINT
Read:
RTIE
0 0
LOCKIE
0 0
SCMIE
0
Write:
0x0039 CLKSEL
Read:
PLLSEL PSTP SYSWAI ROAWAI PLLWAI CWAI RTIWAI COPWAI
Write:
0x003A PLLCTL
Read:
CME PLLON AUTO ACQ
0
PRE PCE SCME
Write:
0x003B RTICTL
Read: 0
RTR6 RTR5 RTR4 RTR3 RTR2 RTR1 RTR0
Write:
0x003C COPCTL
Read:
WCOP RSBCK
0 0 0
CR2 CR1 CR0
Write:
0x003D
FORBYP
TEST ONLY
Read:
RTIBYP COPBYP
0
PLLBYP
0 0
FCM
0
Write:
0x003E
CTCTL
TEST ONLY
Read: TCTL7 TCTL6 TCTL5 TCTL4 TCLT3 TCTL2 TCTL1 TCTL0
Write:
0x003F ARMCOP
Read: 0 0 0 0 0 0 0 0
Write: Bit 7 6 5 4 3 2 1 Bit 0
Address Name Bit 7 Bit 6 Bit 5 Bit 4 Bit 3 Bit 2 Bit 1 Bit 0
0x0040 TIOS
Read:
IOS7 IOS6 IOS5 IOS4 IOS3 IOS2 IOS1 IOS0
Write:
0x0041 CFORC
Read: 0 0 0 0 0 0 0 0
Write: FOC7 FOC6 FOC5 FOC4 FOC3 FOC2 FOC1 FOC0
0x0042 OC7M
Read:
OC7M7 OC7M6 OC7M5 OC7M4 OC7M3 OC7M2 OC7M1 OC7M0
Write:
0x0043 OC7D
Read:
OC7D7 OC7D6 OC7D5 OC7D4 OC7D3 OC7D2 OC7D1 OC7D0
Write:
0x0044 TCNT (hi)
Read: Bit 15 14 13 12 11 10 9 Bit 8
Write:
0x0045 TCNT (lo)
Read: Bit 7 6 5 4 3 2 1 Bit 0
Write:
0x0046 TSCR1
Read:
TEN TSWAI TSFRZ TFFCA
0 0 0 0
Write:
0x0047 TTOV
Read:
TOV7 TOV6 TOV5 TOV4 TOV3 TOV2 TOV1 TOV0
Write:
Chapter 1 MC9S12C and MC9S12GC Device Overview (MC9S12C128)
32 MC9S12C-Family / MC9S12GC-Family Freescale Semiconductor
Rev 01.24
0x0048 TCTL1
Read:
OM7 OL7 OM6 OL6 OM5 OL5 OM4 OL4
Write:
0x0049 TCTL2
Read:
OM3 OL3 OM2 OL2 OM1 OL1 OM0 OL0
Write:
0x004A TCTL3
Read:
EDG7B EDG7A EDG6B EDG6A EDG5B EDG5A EDG4B EDG4A
Write:
0x004B TCTL4
Read:
EDG3B EDG3A EDG2B EDG2A EDG1B EDG1A EDG0B EDG0A
Write:
0x004C TIE
Read:
C7I C6I C5I C4I C3I C2I C1I C0I
Write:
0x004D TSCR2
Read:
TOI
0 0 0
TCRE PR2 PR1 PR0
Write:
0x004E TFLG1
Read:
C7F C6F C5F C4F C3F C2F C1F C0F
Write:
0x004F TFLG2
Read:
TOF
0 0 0 0 0 0 0
Write:
0x0050 TC0 (hi)
Read:
Bit 15 14 13 12 11 10 9 Bit 8
Write:
0x0051 TC0 (lo)
Read:
Bit 7 6 5 4 3 2 1 Bit 0
Write:
0x0052 TC1 (hi)
Read:
Bit 15 14 13 12 11 10 9 Bit 8
Write:
0x0053 TC1 (lo)
Read:
Bit 7 6 5 4 3 2 1 Bit 0
Write:
0x0054 TC2 (hi)
Read:
Bit 15 14 13 12 11 10 9 Bit 8
Write:
0x0055 TC2 (lo)
Read:
Bit 7 6 5 4 3 2 1 Bit 0
Write:
0x0056 TC3 (hi)
Read:
Bit 15 14 13 12 11 10 9 Bit 8
Write:
0x0057 TC3 (lo)
Read:
Bit 7 6 5 4 3 2 1 Bit 0
Write:
0x0058 TC4 (hi)
Read:
Bit 15 14 13 12 11 10 9 Bit 8
Write:
0x0059 TC4 (lo)
Read:
Bit 7 6 5 4 3 2 1 Bit 0
Write:
0x005A TC5 (hi)
Read:
Bit 15 14 13 12 11 10 9 Bit 8
Write:
0x005B TC5 (lo)
Read:
Bit 7 6 5 4 3 2 1 Bit 0
Write:
0x005C TC6 (hi)
Read:
Bit 15 14 13 12 11 10 9 Bit 8
Write:
0x005D TC6 (lo)
Read:
Bit 7 6 5 4 3 2 1 Bit 0
Write:
0x005E TC7 (hi)
Read:
Bit 15 14 13 12 11 10 9 Bit 8
Write:
Address Name Bit 7 Bit 6 Bit 5 Bit 4 Bit 3 Bit 2 Bit 1 Bit 0
Chapter 1 MC9S12C and MC9S12GC Device Overview (MC9S12C128)
Freescale Semiconductor MC9S12C-Family / MC9S12GC-Family 33
Rev 01.24
0x005F TC7 (lo)
Read:
Bit 7 6 5 4 3 2 1 Bit 0
Write:
0x0060 PACTL
Read: 0
PAEN PAMOD PEDGE CLK1 CLK0 PAOVI PAI
Write:
0x0061 PAFLG
Read: 0 0 0 0 0 0
PAOVF PAIF
Write:
0x0062 PACNT (hi)
Read:
Bit 15 14 13 12 11 10 9 Bit 8
Write:
0x0063 PACNT (lo)
Read:
Bit 7 6 5 4 3 2 1 Bit 0
Write:
0x0064 Reserved
Read: 0 0 0 0 0 0 0 0
Write:
0x0065 Reserved
Read: 0 0 0 0 0 0 0 0
Write:
0x0066 Reserved
Read: 0 0 0 0 0 0 0 0
Write:
0x0067 Reserved
Read: 0 0 0 0 0 0 0 0
Write:
0x0068 Reserved
Read: 0 0 0 0 0 0 0 0
Write:
0x0069 Reserved
Read: 0 0 0 0 0 0 0 0
Write:
0x006A Reserved
Read: 0 0 0 0 0 0 0 0
Write:
0x006B Reserved
Read: 0 0 0 0 0 0 0 0
Write:
0x006C Reserved
Read: 0 0 0 0 0 0 0 0
Write:
0x006D Reserved
Read: 0 0 0 0 0 0 0 0
Write:
0x006E Reserved
Read: 0 0 0 0 0 0 0 0
Write:
0x006F Reserved
Read: 0 0 0 0 0 0 0 0
Write:
0x0070Ð0x007F Reserved
Address Name Bit 7 Bit 6 Bit 5 Bit 4 Bit 3 Bit 2 Bit 1 Bit 0
0x0070Ð
0x007F
Reserved
Read: 0 0 0 0 0 0 0 0
Write:
Address Name Bit 7 Bit 6 Bit 5 Bit 4 Bit 3 Bit 2 Bit 1 Bit 0
Chapter 1 MC9S12C and MC9S12GC Device Overview (MC9S12C128)
34 MC9S12C-Family / MC9S12GC-Family Freescale Semiconductor
Rev 01.24
0x0080Ð0x009F ATD (Analog-to-Digital Converter 10 Bit 8 Channel)
Address Name Bit 7 Bit 6 Bit 5 Bit 4 Bit 3 Bit 2 Bit 1 Bit 0
0x0080 ATDCTL0
Read: 0 0 0 0 0 0 0 0
Write:
0x0081 ATDCTL1
Read: 0 0 0 0 0 0 0 0
Write:
0x0082 ATDCTL2
Read:
ADPU AFFC AWAI ETRIGLE ETRIGP ETRIG ASCIE
ASCIF
Write:
0x0083 ATDCTL3
Read: 0
S8C S4C S2C S1C FIFO FRZ1 FRZ0
Write:
0x0084 ATDCTL4
Read:
SRES8 SMP1 SMP0 PRS4 PRS3 PRS2 PRS1 PRS0
Write:
0x0085 ATDCTL5
Read:
DJM DSGN SCAN MULT
0
CC CB CA
Write:
0x0086 ATDSTAT0
Read:
SCF
0
ETORF FIFOR
0 CC2 CC1 CC0
Write:
0x0087 Reserved
Read: 0 0 0 0 0 0 0 0
Write:
0x0088 ATDTEST0
Read: 0 0 0 0 0 0 0 0
Write:
0x0089 ATDTEST1
Read: 0 0 0 0 0 0 0
SC
Write:
0x008A Reserved
Read: 0 0 0 0 0 0 0 0
Write:
0x008B ATDSTAT1
Read: CCF7 CCF6 CCF5 CCF4 CCF3 CCF2 CCF1 CCF0
Write:
0x008C Reserved
Read: 0 0 0 0 0 0 0 0
Write:
0x008D ATDDIEN
Read:
Bit 7 6 5 4 3 2 1 Bit 0
Write:
0x008E Reserved
Read: 0 0 0 0 0 0 0 0
Write:
0x008F PORTAD
Read: Bit7 6 5 4 3 2 1 BIT 0
Write:
0x0090 ATDDR0H
Read: Bit15 14 13 12 11 10 9 Bit8
Write:
0x0091 ATDDR0L
Read: Bit7 Bit6 0 0 0 0 0 0
Write:
0x0092 ATDDR1H
Read: Bit15 14 13 12 11 10 9 Bit8
Write:
0x0093 ATDDR1L
Read: Bit7 Bit6 0 0 0 0 0 0
Write:
0x0094 ATDDR2H
Read: Bit15 14 13 12 11 10 9 Bit8
Write:
0x0095 ATDDR2L
Read: Bit7 Bit6 0 0 0 0 0 0
Write:
Chapter 1 MC9S12C and MC9S12GC Device Overview (MC9S12C128)
Freescale Semiconductor MC9S12C-Family / MC9S12GC-Family 35
Rev 01.24
0x0096 ATDDR3H
Read: Bit15 14 13 12 11 10 9 Bit8
Write:
0x0097 ATDDR3L
Read: Bit7 Bit6 0 0 0 0 0 0
Write:
0x0098 ATDDR4H
Read: Bit15 14 13 12 11 10 9 Bit8
Write:
0x0099 ATDDR4L
Read: Bit7 Bit6 0 0 0 0 0 0
Write:
0x009A ATDDR5H
Read: Bit15 14 13 12 11 10 9 Bit8
Write:
0x009B ATDDR5L
Read: Bit7 Bit6 0 0 0 0 0 0
Write:
0x009C ATDDR6H
Read: Bit15 14 13 12 11 10 9 Bit8
Write:
0x009D ATDDR6L
Read: Bit7 Bit6 0 0 0 0 0 0
Write:
0x009E ATDDR7H
Read: Bit15 14 13 12 11 10 9 Bit8
Write:
0x009F ATDDR7L
Read: Bit7 Bit6 0 0 0 0 0 0
Write:
0x00A0Ð0x00C7 Reserved
Address Name Bit 7 Bit 6 Bit 5 Bit 4 Bit 3 Bit 2 Bit 1 Bit 0
0x00A0Ð
0x00C7
Reserved
Read: 0 0 0 0 0 0 0 0
Write:
0x00C8Ð0x00CF SCI (Asynchronous Serial Interface)
Address Name Bit 7 Bit 6 Bit 5 Bit 4 Bit 3 Bit 2 Bit 1 Bit 0
0x00C8 SCIBDH
Read: 0 0 0
SBR12 SBR11 SBR10 SBR9 SBR8
Write:
0x00C9 SCIBDL
Read:
SBR7 SBR6 SBR5 SBR4 SBR3 SBR2 SBR1 SBR0
Write:
0x00CA SCICR1
Read:
LOOPS SCISWAI RSRC M WAKE ILT PE PT
Write:
0x00CB SCICR2
Read:
TIE TCIE RIE ILIE TE RE RWU SBK
Write:
0x00CC SCISR1
Read: TDRE TC RDRF IDLE OR NF FE PF
Write:
0x0080Ð0x009F ATD (Analog-to-Digital Converter 10 Bit 8 Channel) (continued)
Address Name Bit 7 Bit 6 Bit 5 Bit 4 Bit 3 Bit 2 Bit 1 Bit 0
Chapter 1 MC9S12C and MC9S12GC Device Overview (MC9S12C128)
36 MC9S12C-Family / MC9S12GC-Family Freescale Semiconductor
Rev 01.24
0x00CD SCISR2
Read: 0 0 0 0 0
BRK13 TXDIR
RAF
Write:
0x00CE SCIDRH
Read: R8
T8
0 0 0 0 0 0
Write:
0x00CF SCIDRL
Read: R7 R6 R5 R4 R3 R2 R1 R0
Write: T7 T6 T5 T4 T3 T2 T1 T0
0x00D0Ð0x00D7 Reserved
Address Name Bit 7 Bit 6 Bit 5 Bit 4 Bit 3 Bit 2 Bit 1 Bit 0
0x00D0Ð
0x00D7
Reserved
Read: 0 0 0 0 0 0 0 0
Write:
0x00D8Ð0x00DF SPI (Serial Peripheral Interface)
Address Name Bit 7 Bit 6 Bit 5 Bit 4 Bit 3 Bit 2 Bit 1 Bit 0
0x00D8 SPICR1
Read:
SPIE SPE SPTIE MSTR CPOL CPHA SSOE LSBFE
Write:
0x00D9 SPICR2
Read: 0 0 0
MODFEN BIDIROE
0
SPISWAI SPC0
Write:
0x00DA SPIBR
Read: 0
SPPR2 SPPR1 SPPR0
0
SPR2 SPR1 SPR0
Write:
0x00DB SPISR
Read: SPIF 0 SPTEF MODF 0 0 0 0
Write:
0x00DC Reserved
Read: 0 0 0 0 0 0 0 0
Write:
0x00DD SPIDR
Read:
Bit7 6 5 4 3 2 1 Bit0
Write:
0x00DE Reserved
Read: 0 0 0 0 0 0 0 0
Write:
0x00DF Reserved
Read: 0 0 0 0 0 0 0 0
Write:
0x00C8Ð0x00CF SCI (Asynchronous Serial Interface) (continued)
Address Name Bit 7 Bit 6 Bit 5 Bit 4 Bit 3 Bit 2 Bit 1 Bit 0
Chapter 1 MC9S12C and MC9S12GC Device Overview (MC9S12C128)
Freescale Semiconductor MC9S12C-Family / MC9S12GC-Family 37
Rev 01.24
0x00E0Ð0x00FF PWM (Pulse Width Modulator)
Address Name Bit 7 Bit 6 Bit 5 Bit 4 Bit 3 Bit 2 Bit 1 Bit 0
$00E0 PWME
Read: 0 0
PWME5 PWME4 PWME3 PWME2 PWME1 PWME0
Write:
$00E1 PWMPOL
Read: 0 0
PPOL5 PPOL4 PPOL3 PPOL2 PPOL1 PPOL0
Write:
$00E2 PWMCLK
Read: 0 0
PCLK5 PCLK4 PCLK3 PCLK2 PCLK1 PCLK0
Write:
$00E3 PWMPRCLK
Read: 0
PCKB2 PCKB1 PCKB0
0
PCKA2 PCKA1 PCKA0
Write:
$00E4 PWMCAE
Read: 0 0
CAE5 CAE4 CAE3 CAE2 CAE1 CAE0
Write:
$00E5 PWMCTL
Read: 0
CON45 CON23 CON01 PSWAI PFRZ
0 0
Write:
$00E6
PWMTST
Test Only
Read: 0 0 0 0 0 0 0 0
Write:
$00E7 PWMPRSC
Read: 0 0 0 0 0 0 0 0
Write:
$00E8 PWMSCLA
Read:
Bit 7 6 5 4 3 2 1 Bit 0
Write:
$00E9 PWMSCLB
Read:
Bit 7 6 5 4 3 2 1 Bit 0
Write:
$00EA PWMSCNTA
Read: 0 0 0 0 0 0 0 0
Write:
$00EB PWMSCNTB
Read: 0 0 0 0 0 0 0 0
Write:
$00EC PWMCNT0
Read: Bit 7 6 5 4 3 2 1 Bit 0
Write: 0 0 0 0 0 0 0 0
$00ED PWMCNT1
Read: Bit 7 6 5 4 3 2 1 Bit 0
Write: 0 0 0 0 0 0 0 0
$00EE PWMCNT2
Read: Bit 7 6 5 4 3 2 1 Bit 0
Write: 0 0 0 0 0 0 0 0
$00EF PWMCNT3
Read: Bit 7 6 5 4 3 2 1 Bit 0
Write: 0 0 0 0 0 0 0 0
$00F0 PWMCNT4
Read: Bit 7 6 5 4 3 2 1 Bit 0
Write: 0 0 0 0 0 0 0 0
$00F1 PWMCNT5
Read: Bit 7 6 5 4 3 2 1 Bit 0
Write: 0 0 0 0 0 0 0 0
$00F2 PWMPER0
Read:
Bit 7 6 5 4 3 2 1 Bit 0
Write:
$00F3 PWMPER1
Read:
Bit 7 6 5 4 3 2 1 Bit 0
Write:
$00F4 PWMPER2
Read:
Bit 7 6 5 4 3 2 1 Bit 0
Write:
$00F5 PWMPER3
Read:
Bit 7 6 5 4 3 2 1 Bit 0
Write:
Chapter 1 MC9S12C and MC9S12GC Device Overview (MC9S12C128)
38 MC9S12C-Family / MC9S12GC-Family Freescale Semiconductor
Rev 01.24
$00F6 PWMPER4
Read:
Bit 7 6 5 4 3 2 1 Bit 0
Write:
$00F7 PWMPER5
Read:
Bit 7 6 5 4 3 2 1 Bit 0
Write:
$00F8 PWMDTY0
Read:
Bit 7 6 5 4 3 2 1 Bit 0
Write:
$00F9 PWMDTY1
Read:
Bit 7 6 5 4 3 2 1 Bit 0
Write:
$00FA PWMDTY2
Read:
Bit 7 6 5 4 3 2 1 Bit 0
Write:
$00FB PWMDTY3
Read:
Bit 7 6 5 4 3 2 1 Bit 0
Write:
$00FC PWMDTY4
Read:
Bit 7 6 5 4 3 2 1 Bit 0
Write:
$00FD PWMDTY5
Read:
Bit 7 6 5 4 3 2 1 Bit 0
Write:
$00FE Reserved
Read:
PWMIF PWMIE
0
PWMLVL
0 PWM5IN
PWM5INL PWM5ENA
Write: PWMRSTRT
$00FF Reserved
Read: 0 0 0 0 0 0 0 0
Write:
0x0110Ð0x013F Reserved
Address Name Bit 7 Bit 6 Bit 5 Bit 4 Bit 3 Bit 2 Bit 1 Bit 0
0x0110Ð
0x003F
Reserved
Read: 0 0 0 0 0 0 0 0
Write:
0x0140Ð0x017F CAN (Scalable Controller Area Network Ñ MSCAN)(1)
Address Name Bit 7 Bit 6 Bit 5 Bit 4 Bit 3 Bit 2 Bit 1 Bit 0
0x0140 CANCTL0
Read:
RXFRM
RXACT
CSWAI
SYNCH
TIME WUPE SLPRQ INITRQ
Write:
0x0141 CANCTL1
Read:
CANE CLKSRC LOOPB LISTEN
0
WUPM
SLPAK INITAK
Write:
0x0142 CANBTR0
Read:
SJW1 SJW0 BRP5 BRP4 BRP3 BRP2 BRP1 BRP0
Write:
0x0143 CANBTR1
Read:
SAMP TSEG22 TSEG21 TSEG20 TSEG13 TSEG12 TSEG11 TSEG10
Write:
0x0144 CANRFLG
Read:
WUPIF CSCIF
RSTAT1 RSTAT0 TSTAT1 TSTAT0
OVRIF RXF
Write:
0x0145 CANRIER
Read:
WUPIE CSCIE RSTATE1 RSTATE0 TSTATE1 TSTATE0 OVRIE RXFIE
Write:
0x00E0Ð0x00FF PWM (Pulse Width Modulator) (continued)
Address Name Bit 7 Bit 6 Bit 5 Bit 4 Bit 3 Bit 2 Bit 1 Bit 0
Chapter 1 MC9S12C and MC9S12GC Device Overview (MC9S12C128)
Freescale Semiconductor MC9S12C-Family / MC9S12GC-Family 39
Rev 01.24
0x0146 CANTFLG
Read: 0 0 0 0 0
TXE2 TXE1 TXE0
Write:
0x0147 CANTIER
Read: 0 0 0 0 0
TXEIE2 TXEIE1 TXEIE0
Write:
0x0148 CANTARQ
Read: 0 0 0 0 0
ABTRQ2 ABTRQ1 ABTRQ0
Write:
0x0149 CANTAAK
Read: 0 0 0 0 0 ABTAK2 ABTAK1 ABTAK0
Write:
0x014A CANTBSEL
Read: 0 0 0 0 0
TX2 TX1 TX0
Write:
0x014B CANIDAC
Read: 0 0
IDAM1 IDAM0
0 IDHIT2 IDHIT1 IDHIT0
Write:
0x014C Reserved
Read: 0 0 0 0 0 0 0 0
Write:
0x014D Reserved
Read: 0 0 0 0 0 0 0 0
Write:
0x014E CANRXERR
Read: RXERR7 RXERR6 RXERR5 RXERR4 RXERR3 RXERR2 RXERR1 RXERR0
Write:
0x014F CANTXERR
Read: TXERR7 TXERR6 TXERR5 TXERR4 TXERR3 TXERR2 TXERR1 TXERR0
Write:
0x0150Ð
0x0153
CANIDAR0 -
CANIDAR3
Read:
AC7 AC6 AC5 AC4 AC3 AC2 AC1 AC0
Write:
0x0154Ð
0x0157
CANIDMR0 -
CANIDMR3
Read:
AM7 AM6 AM5 AM4 AM3 AM2 AM1 AM0
Write:
0x0158Ð
0x015B
CANIDAR4 -
CANIDAR7
Read:
AC7 AC6 AC5 AC4 AC3 AC2 AC1 AC0
Write:
0x015CÐ
0x015F
CANIDMR4 -
CANIDMR7
Read:
AM7 AM6 AM5 AM4 AM3 AM2 AM1 AM0
Write:
0x0160Ð
0x016F
CANRXFG
Read: FOREGROUND RECEIVE BUFFER see Table 1-2
Write:
0x0170Ð
0x017F
CANTXFG
Read:
FOREGROUND TRANSMIT BUFFER see Table 1-2
Write:
1. Not available on the MC9S12GC Family members. Those memory locations should not be accessed.
Table 1-2. Detailed MSCAN Foreground Receive and Transmit Buffer Layout
Address Name Bit 7 Bit 6 Bit 5 Bit 4 Bit 3 Bit 2 Bit 1 Bit 0
0xXXX0
Extended ID Read: ID28 ID27 ID26 ID25 ID24 ID23 ID22 ID21
Standard ID Read: ID10 ID9 ID8 ID7 ID6 ID5 ID4 ID3
CANxRIDR0 Write:
0xXXX1
Extended ID Read: ID20 ID19 ID18 SRR=1 IDE=1 ID17 ID16 ID15
Standard ID Read: ID2 ID1 ID0 RTR IDE=0
CANxRIDR1 Write:
0x0140Ð0x017F CAN (Scalable Controller Area Network Ñ MSCAN)(1) (continued)
Address Name Bit 7 Bit 6 Bit 5 Bit 4 Bit 3 Bit 2 Bit 1 Bit 0
Chapter 1 MC9S12C and MC9S12GC Device Overview (MC9S12C128)
40 MC9S12C-Family / MC9S12GC-Family Freescale Semiconductor
Rev 01.24
0xXXX2
Extended ID Read: ID14 ID13 ID12 ID11 ID10 ID9 ID8 ID7
Standard ID Read:
CANxRIDR2 Write:
0xXXX3
Extended ID Read: ID6 ID5 ID4 ID3 ID2 ID1 ID0 RTR
Standard ID Read:
CANxRIDR3 Write:
0xXXX4Ð
0xXXXB
CANxRDSR0Ð
CANxRDSR7
Read: DB7 DB6 DB5 DB4 DB3 DB2 DB1 DB0
Write:
0xXXXC CANRxDLR
Read: DLC3 DLC2 DLC1 DLC0
Write:
0xXXXD Reserved
Read:
Write:
0xXXXE CANxRTSRH
Read: TSR15 TSR14 TSR13 TSR12 TSR11 TSR10 TSR9 TSR8
Write:
0xXXXF CANxRTSRL
Read: TSR7 TSR6 TSR5 TSR4 TSR3 TSR2 TSR1 TSR0
Write:
0xxx10
Extended ID Read:
ID28 ID27 ID26 ID25 ID24 ID23 ID22 ID21
CANxTIDR0 Write:
Standard ID
Read:
ID10 ID9 ID8 ID7 ID6 ID5 ID4 ID3
Write:
0xxx11
Extended ID Read:
ID20 ID19 ID18 SRR=1 IDE=1 ID17 ID16 ID15
CANxTIDR1 Write:
Standard ID
Read:
ID2 ID1 ID0 RTR IDE=0
Write:
0xxx12
Extended ID Read:
ID14 ID13 ID12 ID11 ID10 ID9 ID8 ID7
CANxTIDR2 Write:
Standard ID
Read:
Write:
0xxx13
Extended ID Read:
ID6 ID5 ID4 ID3 ID2 ID1 ID0 RTR
CANxTIDR3 Write:
Standard ID
Read:
Write:
0xxx14Ð
0xxx1B
CANxTDSR0Ð
CANxTDSR7
Read:
DB7 DB6 DB5 DB4 DB3 DB2 DB1 DB0
Write:
0xxx1C CANxTDLR
Read:
DLC3 DLC2 DLC1 DLC0
Write:
0xxx1D CONxTTBPR
Read:
PRIO7 PRIO6 PRIO5 PRIO4 PRIO3 PRIO2 PRIO1 PRIO0
Write:
0xxx1E CANxTTSRH
Read: TSR15 TSR14 TSR13 TSR12 TSR11 TSR10 TSR9 TSR8
Write:
0xxx1F CANxTTSRL
Read: TSR7 TSR6 TSR5 TSR4 TSR3 TSR2 TSR1 TSR0
Write:
Table 1-2. Detailed MSCAN Foreground Receive and Transmit Buffer Layout (continued)
Address Name Bit 7 Bit 6 Bit 5 Bit 4 Bit 3 Bit 2 Bit 1 Bit 0
Chapter 1 MC9S12C and MC9S12GC Device Overview (MC9S12C128)
Freescale Semiconductor MC9S12C-Family / MC9S12GC-Family 41
Rev 01.24
0x0180Ð0x023F Reserved
Address Name Bit 7 Bit 6 Bit 5 Bit 4 Bit 3 Bit 2 Bit 1 Bit 0
0x0180Ð
0x023F
Reserved
Read: 0 0 0 0 0 0 0 0
Write:
0x0240Ð0x027F PIM (Port Interface Module) (Sheet 1 of 3)
Address Name Bit 7 Bit 6 Bit 5 Bit 4 Bit 3 Bit 2 Bit 1 Bit 0
0x0240 PTT
Read:
PTT7 PTT6 PTT5 PTT4 PTT3 PTT2 PTT1 PTT0
Write:
0x0241 PTIT
Read: PTIT7 PTIT6 PTIT5 PTIT4 PTIT3 PTIT2 PTIT1 PTIT0
Write:
0x0242 DDRT
Read:
DDRT7 DDRT7 DDRT5 DDRT4 DDRT3 DDRT2 DDRT1 DDRT0
Write:
0x0243 RDRT
Read:
RDRT7 RDRT6 RDRT5 RDRT4 RDRT3 RDRT2 RDRT1 RDRT0
Write:
0x0244 PERT
Read:
PERT7 PERT6 PERT5 PERT4 PERT3 PERT2 PERT1 PERT0
Write:
0x0245 PPST
Read:
PPST7 PPST6 PPST5 PPST4 PPST3 PPST2 PPST1 PPST0
Write:
0x0246 Reserved
Read: 0 0 0 0 0 0 0 0
Write:
0x0247 MODRR
Read: 0 0 0
MODRR4 MODRR3 MODRR2 MODRR1 MODRR0
Write:
0x0248 PTS
Read: 0 0 0 0
PTS3 PTS2 PTS1 PTS0
Write:
0x0249 PTIS
Read: 0 0 0 0 PTIS3 PTIS2 PTIS1 PTIS0
Write:
0x024A DDRS
Read: 0 0 0 0
DDRS3 DDRS2 DDRS1 DDRS0
Write:
0x024B RDRS
Read: 0 0 0 0
RDRS3 RDRS2 RDRS1 RDRS0
Write:
0x024C PERS
Read: 0 0 0 0
PERS3 PERS2 PERS1 PERS0
Write:
0x024D PPSS
Read: 0 0 0 0
PPSS3 PPSS2 PPSS1 PPSS0
Write:
0x024E WOMS
Read: 0 0 0 0
WOMS3 WOMS2 WOMS1 WOMS0
Write:
0x024F Reserved
Read: 0 0 0 0 0 0 0 0
Write:
0x0250 PTM
Read: 0 0
PTM5 PTM4 PTM3 PTM2 PTM1 PTM0
Write:
0x0251 PTIM
Read: 0 0 PTIM5 PTIM4 PTIM3 PTIM2 PTIM1 PTIM0
Write:
0x0252 DDRM
Read: 0 0
DDRM5 DDRM4 DDRM3 DDRM2 DDRM1 DDRM0
Write:
Chapter 1 MC9S12C and MC9S12GC Device Overview (MC9S12C128)
42 MC9S12C-Family / MC9S12GC-Family Freescale Semiconductor
Rev 01.24
0x0253 RDRM
Read: 0 0
RDRM5 RDRM4 RDRM3 RDRM2 RDRM1 RDRM0
Write:
0x0254 PERM
Read: 0 0
PERM5 PERM4 PERM3 PERM2 PERM1 PERM0
Write:
0x0255 PPSM
Read: 0 0
PPSM5 PPSM4 PPSM3 PPSM2 PPSM1 PPSM0
Write:
0x0256 WOMM
Read: 0 0
WOMM5 WOMM4 WOMM3 WOMM2 WOMM1 WOMM0
Write:
0x0257 Reserved
Read: 0 0 0 0 0 0 0 0
Write:
0x0258 PTP
Read:
PTP7 PTP6 PTP5 PTP4 PTP3 PTP2 PTP1 PTP0
Write:
0x0259 PTIP
Read: PTIP7 PTIP6 PTIP5 PTIP4 PTIP3 PTIP2 PTIP1 PTIP0
Write:
0x025A DDRP
Read:
DDRP7 DDRP7 DDRP5 DDRP4 DDRP3 DDRP2 DDRP1 DDRP0
Write:
0x025B RDRP
Read:
RDRP7 RDRP6 RDRP5 RDRP4 RDRP3 RDRP2 RDRP1 RDRP0
Write:
0x025C PERP
Read:
PERP7 PERP6 PERP5 PERP4 PERP3 PERP2 PERP1 PERP0
Write:
0x025D PPSP
Read:
PPSP7 PPSP6 PPSP5 PPSP4 PPSP3 PPSP2 PPSP1 PPSS0
Write:
0x025E PIEP
Read:
PIEP7 PIEP6 PIEP5 PIEP4 PIEP3 PIEP2 PIEP1 PIEP0
Write:
0x025F PIFP
Read:
PIFP7 PIFP6 PIFP5 PIFP4 PIFP3 PIFP2 PIFP1 PIFP0
Write:
0x0260 Reserved
Read: 0 0 0 0 0 0 0 0
Write:
0x0261 Reserved
Read: 0 0 0 0 0 0 0 0
Write:
0x0262 Reserved
Read: 0 0 0 0 0 0 0 0
Write:
0x0263 Reserved
Read: 0 0 0 0 0 0 0 0
Write:
0x0264 Reserved
Read: 0 0 0 0 0 0 0 0
Write:
0x0265 Reserved
0x0266 Reserved
Read: 0 0 0 0 0 0 0 0
Write:
0x0267 Reserved
Read: 0 0 0 0 0 0 0 0
Write:
0x0268 PTJ
Read:
PTJ7 PTJ6
0 0 0 0 0 0
Write:
0x0269 PTIJ
Read: PTIJ7 PTIJ6 0 0 0 0 0 0
Write:
0x0240Ð0x027F PIM (Port Interface Module) (Sheet 2 of 3)
Address Name Bit 7 Bit 6 Bit 5 Bit 4 Bit 3 Bit 2 Bit 1 Bit 0
Chapter 1 MC9S12C and MC9S12GC Device Overview (MC9S12C128)
Freescale Semiconductor MC9S12C-Family / MC9S12GC-Family 43
Rev 01.24
0x026A DDRJ
Read:
DDRJ7 DDRJ7
0 0 0 0 0 0
Write:
0x026B RDRJ
Read:
RDRJ7 RDRJ6
0 0 0 0 0 0
Write:
0x026C PERJ
Read:
PERJ7 PERJ6
0 0 0 0 0 0
Write:
0x026D PPSJ
Read:
PPSJ7 PPSJ6
0 0 0 0 0 0
Write:
0x026E PIEJ
Read:
PIEJ7 PIEJ6
0 0 0 0 0 0
Write:
0x026F PIFJ
Read:
PIFJ7 PIFJ6
0 0 0 0 0 0
Write:
0x0270 PTAD
Read:
PTAD7 PTAD6 PTAD5 PTAD4 PTAD3 PTAD2 PTAD1 PTAD0
Write:
0x0271 PTIAD
Read: PTIAD7 PTIAD6 PTIAD5 PTIAD4 PTIAD3 PTIAD2 PTIAD1 PTIJ7
Write:
0x0272 DDRAD
Read:
DDRAD7 DDRAD6 DDRAD5 DDRAD4 DDRAD3 DDRAD2 DDRAD1 DDRAD0
Write:
0x0273 RDRAD
Read:
RDRAD7 RDRAD6 RDRAD5 RDRAD4 RDRAD3 RDRAD2 RDRAD1 RDRAD0
Write:
0x0274 PERAD
Read:
PERAD7 PERAD6 PERAD5 PERAD4 PERAD3 PERAD2 PERAD1 PERAD0
Write:
0x0275 PPSAD
Read:
PPSAD7 PPSAD6 PPSAD5 PPSAD4 PPSAD3 PPSAD2 PPSAD1 PPSAD0
0x0276-
0x027F
Reserved
Read: 0 0 0 0 0 0 0 0
Write:
0x0280Ð0x03FF Reserved Space
Address Name Bit 7 Bit 6 Bit 5 Bit 4 Bit 3 Bit 2 Bit 1 Bit 0
0x0280Ð
0x2FF
Reserved
Read: 0 0 0 0 0 0 0 0
Write:
0x0300
Ð0x03FF
Unimplemented
Read: 0 0 0 0 0 0 0 0
*/


/* Port Integration Module - Reordered within sections for clarity */
/* PIM information from 5 tables the last of which is spread over three pages */

/* Plain ports output switch, input state registers */
#define PORTS_BA DVUSP(0x0001) /* Both A and B combined as a 16 bit register for ignition access */
#define PORTA DVUCP(0x0000)
#define PORTB DVUCP(0x0001)
#define PORTE DVUCP(0x0008)
#define PORTK DVUCP(0x0032)
/* #define PORTC DVUCP(0x0004) these pins are not bonded on the 112 pin package */
/* #define PORTD DVUCP(0x0005) these pins are not bonded on the 112 pin package */


/* Plain ports Data Direction Registers */
#define DDRA DVUCP(0x0002)
#define DDRB DVUCP(0x0003)
#define DDRE DVUCP(0x0009)
#define DDRK DVUCP(0x0033)


#define DDRC DVUCP(0x0006) /* these pins are not bonded on the 112 pin package but need switching to output */
#define DDRD DVUCP(0x0007) /* these pins are not bonded on the 112 pin package but need switching to output */


/* 0b1//1//00 */
/* --K//E//BA */
/* TODO NOTE: the sixth bit controls pull up on BKGD and VREGEN pins set this to ???? */
/* NOTE: pull up on port E is for 0-4 and 7, ports 5 and 6 are pulled down during reset and never pulled up. */
#define PUCR DVUCP(0x000C) /* pull up enable when used as an input, 0 = no pull up, 1 = pull up on */


/* 0b1//0//00 */
/* --K//E//BA */
/* NOTE: reduced drive affects all pins of all ports listed above. */
#define RDRIV DVUCP(0x000D) /* reduced drive register when used as output, 0 = full drive, 1 = reduced drive */


#define ECLKCTL DVUCP(0x001C) /* Comes up 0b_1100_0000 = both pins off in normal single chip mode */
#define IRQCR DVUCP(0x001E) /* 0 in bit 7 makes it ultra sensitive, 1 makes it falling edge sensitive. 0 in bit 6 turns interrupts off, 1 in bit 6 turns them on. */


/* Port T registers */
#define PTT DVUCP(0x0240) /* GPIO output register, can not be read from reliably, use PTIT instead */
#define PORTT DVUCP(0x0240) /* Duplicate definition for consistency */
#define PTIT DVUCP(0x0241) /* read only port state bits, always return the state of the pin, can be used to detect overload on outputs */
#define DDRT DVUCP(0x0242) /* TODO configure all IO as outputs until we need it */
#define RDRT DVUCP(0x0243) /* reduced drive register when used as output, 0 = full drive, 1 = reduced drive */
#define PERT DVUCP(0x0244) /* pull up/down enable when used as an input, 0 = no pull up, 1 = pull up on */
#define PPST DVUCP(0x0245) /* 0 = pull up, 1 = pull down */


/* Port S registers */
#define PTS DVUCP(0x0248)
#define PORTS DVUCP(0x0248) /* Duplicate definition for consistency */
#define PTIS DVUCP(0x0249) /* read only port state bits, always return the state of the pin, can be used to detect overload on outputs */
#define DDRS DVUCP(0x024A) /* TODO configure all IO as outputs until we need it */
#define RDRS DVUCP(0x024B) /* reduced drive register when used as output, 0 = full drive, 1 = reduced drive */
#define PERS DVUCP(0x024C) /* pull up enable when used as an input, 0 = no pull up, 1 = pull up on */
#define PPSS DVUCP(0x024D) /* 0 = pull up, 1 = pull down */
#define WOMS DVUCP(0x024E) /* wired OR mode TODO find out what this actually means in real terms. */


/* Port M registers */
#define PTM DVUCP(0x0250)
#define PORTM DVUCP(0x0250) /* Duplicate definition for consistency */
#define PTIM DVUCP(0x0251) /* read only port state bits, always return the state of the pin, can be used to detect overload on outputs */
#define DDRM DVUCP(0x0252) /* TODO configure all IO as outputs until we need it */
#define RDRM DVUCP(0x0253) /* reduced drive register when used as output, 0 = full drive, 1 = reduced drive */
#define PERM DVUCP(0x0254) /* pull up enable when used as an input, 0 = no pull up, 1 = pull up on */
#define PPSM DVUCP(0x0255) /* 0 = pull up, 1 = pull down */
#define WOMM DVUCP(0x0256) /* wired OR mode TODO find out what this actually means in real terms. */


/* this should be set to the following bit mask xx????00 */
#define MODRR DVUCP(0x0257)


/* Port P registers */
#define PTP DVUCP(0x0258)
#define PORTP DVUCP(0x0258) /* Duplicate definition for consistency */
#define PTIP DVUCP(0x0259) /* read only port state bits, always return the state of the pin, can be used to detect overload on outputs */
#define DDRP DVUCP(0x025A) /* TODO configure all IO as outputs until we need it */
#define RDRP DVUCP(0x025B) /* reduced drive register when used as output, 0 = full drive, 1 = reduced drive */
#define PERP DVUCP(0x025C) /* pull up enable when used as an input, 0 = no pull up, 1 = pull up on */
#define PPSP DVUCP(0x025D) /* 0 = pull up, 1 = pull down AND when IE pull down means I on rising edge and pull up means I on falling edge */
#define PIEP DVUCP(0x025E) /* interrupt enable, turns on interrupts */
#define PIFP DVUCP(0x025F) /* interrupt flag, write a 1 to clear it */


/* Port H registers */
#define PTH DVUCP(0x0260)
#define PORTH DVUCP(0x0260) /* Duplicate definition for consistency */
#define PTIH DVUCP(0x0261) /* read only port state bits, always return the state of the pin, can be used to detect overload on outputs */
#define DDRH DVUCP(0x0262) /* TODO configure all IO as outputs until we need it */
#define RDRH DVUCP(0x0263) /* reduced drive register when used as output, 0 = full drive, 1 = reduced drive */
#define PERH DVUCP(0x0264) /* pull up enable when used as an input, 0 = no pull up, 1 = pull up on */
#define PPSH DVUCP(0x0265) /* 0 = pull up, 1 = pull down AND when IE pull down means I on rising edge and pull up means I on falling edge */
#define PIEH DVUCP(0x0266) /* interrupt enable, turns on interrupts */
#define PIFH DVUCP(0x0267) /* interrupt flag, write a 1 to clear it */


/* Port J registers */
#define PTJ DVUCP(0x0268)
#define PORTJ DVUCP(0x0268) /* Duplicate definition for consistency */
#define PTIJ DVUCP(0x0269) /* read only port state bits, always return the state of the pin, can be used to detect overload on outputs */
#define DDRJ DVUCP(0x026A) /* TODO configure all IO as outputs until we need it */
#define RDRJ DVUCP(0x026B) /* reduced drive register when used as output, 0 = full drive, 1 = reduced drive */
#define PERJ DVUCP(0x026C) /* pull up enable when used as an input, 0 = no pull up, 1 = pull up on */
#define PPSJ DVUCP(0x026D) /* 0 = pull up, 1 = pull down AND when IE pull down means I on rising edge and pull up means I on falling edge */
#define PIEJ DVUCP(0x026E) /* interrupt enable, turns on interrupts */
#define PIFJ DVUCP(0x026F) /* interrupt flag, write a 1 to clear it */


/* #define ATD0PT1 DVUCP(0x0271)	we don't want to use valuable ATD pins as normal IO, but if we did, r/w here */
/* #define ATD0DDR1 DVUCP(0x0273) for use as an input, ATD0DIEN has to be set to 1. for use as an output? */
/* #define ATD0RDR1 DVUCP(0x0275) reduced drive register when used as output, 0 = full drive, 1 = reduced drive */
#define ATD0PER1 DVUCP(0x0277) /* pull up enable when used as an input, 0 = no pull up, 1 = pull up on */

/* #define ATD1PT1 DVUCP(0x0279)	we don't want to use valuable ATD pins as normal IO, but if we did, r/w here */
/* #define ATD1DDR1 DVUCP(0x027B)	for use as an input, ATD1DIEN1 has to be set to 1. for use as an output? */
/* #define ATD1RDR1 DVUCP(0x027D)	reduced drive register when used as output, 0 = full drive, 1 = reduced drive */
/* #define ATD1PER1 DVUCP(0x027F)	pull up enable when used as an input, 0 = no pull up, 1 = pull up on */

/* Not available on 112 pin version	*/
/* #define ATD1DDR0 DVUCP(0x027A) */
/* 0x0278 #define ATD1PT0 DVUCP() */
/* 0x027C #define ATD1RDR0 DVUCP() */
/* 0x027E #define ATD1PER0 DVUCP() */


/* Memory Mapping Control registers TODO configure these to suit our application. */
/* MMC 1/4 */
//0x000B MODE DVUCP()
//0x000A MMCCTL0 DVUCP()
//0x0013 MMCCTL1 DVUCP()


/* Page control registers */
//#define RPAGE DVUCP(0x0016) /* Used to page table data in and out of visible memory. */
//0x0017 EPAGE DVUCP() /* /* TODO similar to above if we need another 2k of eeprom. what are advantages/disadvantages of eeprom over flash?? */
#define PPAGE DVUCP(0x0030) /* TODO look at the best way to use the flash space in a complete system with a lot of code and data. used by compiler and maybe us to switch flash pages for loading/unloading data. */
//0x0010 GPAGE DVUCP() /* /* Global page register for global instruction addressing. I doubt we will use this. */
//0x0011 DIRECT DVUCP() /* /* Direct addressing mode control register. I doubt we will use this. */


//// MMC 4/4
//0x011C RAMWPC /* RAM Write Protection register, the pdf document appears to be incorrect for this, best not to touch it. */
//0x011D RAMXGU /* XGATE Upper region limit, this defines how much RAM we give the xgate to work with. */
//0x011E RAMSHL /* Shared memory lower boundary register, this defines the lower limit of the overlap between XGATE RAM and CPU RAM */
//0x011F RAMSHU /* Shared memory upper boundary register, this defines the upper limit of the overlap between XGATE RAM and CPU RAM */


//// EBI
//0x000E EBICTL0 DVUCP() /*
//0x000F EBICTL1 DVUCP() /*


//// Misc Peripheral
//0x001A PARTIDH DVUCP() /*
//0x001B PARTIDL DVUCP() /*


/* Clock and Reset Generator */
#define SYNR DVUCP(0x0034) /* Multiplier of result of division by REFDV below, output is new PLL/Bus freqency. */
#define REFDV DVUCP(0x0035) /* Divisor of external clock frequency pre being multiplied by SYNR above. */
//0x0036 CTFLG DVUCP() /*
#define CRGFLG DVUCP(0x0037) /* Clock and Reset Generator flags, we use this to determine when the PLL is stable and ready to use. Also to reset the RTI flag. */
#define CRGINT DVUCP(0x0038) /* Bit 7 is RTIE RTI enable bit. */
#define CLKSEL DVUCP(0x0039) /* Clock select register, choose PLL or external clock with this. */
#define PLLCTL DVUCP(0x003A) /* PLL frequency generator control register, used for setting the bus frequency. */
#define RTICTL DVUCP(0x003B) /* Divider select register */
#define COPCTL DVUCP(0x003C) /* COP watch dog control register */
//0x003D FORBYP DVUCP() /*
#define ARMCOP DVUCP(0x003F) /* Computer operating properly timer, we won't be using this at least until we have profiled the running application. it will just cause headaches otherwise. */


/* Enhanced Capture Timer */
/* see reference document from Huang course overview/notes : http://www.ee.nmt.edu/~rison/ee308_spr06/lectures.html */
/* see this link for a discussion of the old 68hc12 timer http://www.seattlerobotics.org/encoder/nov97/68hc12.html */

#define TCNT DVUSP(0x0044) /* Timer counter 16 bit (0x0044 TCNT (hi), 0x0045 TCNT (lo)) */

/* Behavioural control registers (dual purpose) */
#define TIOS DVUCP(0x0040) /* Selects input capture or output compare mode for each timer pin */
#define TIE DVUCP(0x004C) /* Timer channel interrupt enable register */
#define TSCR1 DVUCP(0x0046) /* Timer System Control Register 1 */
#define TSCR2 DVUCP(0x004D) /* Timer System Control Register 2 */
#define TFLG DVUCP(0x004E) /* Timer channel flags */
#define TFLGOF DVUCP(0x004F) /* Timer over flow flag */
#define PTPSR DVUCP(0x006E) /* Precision prescaler for the main timer */

/* Output compare control registers */
#define TTOV DVUCP(0x0047) /* Timer Toggle on Overflow output compare control */
#define CFORC DVUCP(0x0041) /* Output compare force, write a 1 to make the programmed action occur now */
#define OC7M DVUCP(0x0042) /* Channel 7 output compare other pins control mask */
#define OC7D DVUCP(0x0043) /* Channel 7 output compare other pins states */

/*	Timer output compare action control registers
 *	OMx	OLx	Action
 *	0	0	Timer disconnected from output pin logic
 *	0	1	Toggle OCx output line
 *	1	0	Clear OCx output line to zero
 *	1	1	Set OCx output line to one */
#define TCTL1 DVUCP(0x0048) /* (M,L) 77,66,55,44 */
#define TCTL2 DVUCP(0x0049) /* (M,L) 33,22,11,00 */
#define TCTL1_ADDR AVUCP(0x0048) /* (M,L) 77,66,55,44 */
#define TCTL2_ADDR AVUCP(0x0049) /* (M,L) 33,22,11,00 */


/* Input capture control registers */
#define DLYCT DVUCP(0x0069) /* Delay counter control register (minimum tooth width) */
#define ICSYS DVUCP(0x006B) /* Input capture behaviour control register */
#define ICOVW DVUCP(0x006A) /* Input capture overwrite allow */

/*	Timer input capture edge detection control registers
 *	EDGxB	EDGxA	Configuration
 *	0		0		Capture disabled
 *	0		1		Capture on rising edges only
 *	1		0		Capture on falling edges only
 *	1		1		Capture on any edge (rising or falling) */
#define TCTL3 DVUCP(0x004A) /* (B,A) 77,66,55,44 */
#define TCTL4 DVUCP(0x004B) /* (B,A) 33,22,11,00 */

/* Input capture holding registers for 0 - 3 */
#define TC0H DVUSP(0x0078) /* 16 bit (0x0078 TC0H (hi), 0x0079 TC0H (lo)) */
#define TC1H DVUSP(0x007A) /* 16 bit (0x007A TC1H (hi), 0x007B TC1H (lo)) */
#define TC2H DVUSP(0x007C) /* 16 bit (0x007C TC2H (hi), 0x007D TC2H (lo)) */
#define TC3H DVUSP(0x007E) /* 16 bit (0x007E TC3H (hi), 0x007F TC3H (lo)) */

/* Time value comparison/storage registers for each timer channel */
#define TC0 DVUSP(0x0050) /* 16 bit (0x0050 TC0 (hi), 0x0051 TC0 (lo)) */
#define TC1 DVUSP(0x0052) /* 16 bit (0x0052 TC1 (hi), 0x0053 TC1 (lo)) */
#define TC2 DVUSP(0x0054) /* 16 bit (0x0054 TC2 (hi), 0x0055 TC2 (lo)) */
#define TC3 DVUSP(0x0056) /* 16 bit (0x0056 TC3 (hi), 0x0057 TC3 (lo)) */
#define TC4 DVUSP(0x0058) /* 16 bit (0x0058 TC4 (hi), 0x0059 TC4 (lo)) */
#define TC5 DVUSP(0x005A) /* 16 bit (0x005A TC5 (hi), 0x005B TC5 (lo)) */
#define TC6 DVUSP(0x005C) /* 16 bit (0x005C TC6 (hi), 0x005D TC6 (lo)) */
#define TC7 DVUSP(0x005E) /* 16 bit (0x005E TC7 (hi), 0x005F TC7 (lo)) */

#define TC2_ADDR AVUSP(0x0054) /* 16 bit (0x0054 TC2 (hi), 0x0055 TC2 (lo)) */
#define TC3_ADDR AVUSP(0x0056) /* 16 bit (0x0056 TC3 (hi), 0x0057 TC3 (lo)) */
#define TC4_ADDR AVUSP(0x0058) /* 16 bit (0x0058 TC4 (hi), 0x0059 TC4 (lo)) */
#define TC5_ADDR AVUSP(0x005A) /* 16 bit (0x005A TC5 (hi), 0x005B TC5 (lo)) */
#define TC6_ADDR AVUSP(0x005C) /* 16 bit (0x005C TC6 (hi), 0x005D TC6 (lo)) */
#define TC7_ADDR AVUSP(0x005E) /* 16 bit (0x005E TC7 (hi), 0x005F TC7 (lo)) */



/* Pulse accumulator control registers */
#define ICPAR DVUCP(0x0068)
/*	(PACTL) 7   6    5     4     3    2    1    0
	 		  PAEN PAMOD PEDGE CLK1 CLK0 PAOVI PAI */
#define PACTL DVUCP(0x0060)
#define PAFLG DVUCP(0x0061)
#define PBCTL DVUCP(0x0070)
#define PBFLG DVUCP(0x0071)
/* Pulse accumulator count registers dual access, 8 or 16 bit */
#define PACNUS2 DVUSP(0x0062) /* 16 bit (0x0062 PACN3, 0x0063 PACN2) */
#define PACNUS0 DVUSP(0x0064) /* 16 bit (0x0064 PACN1, 0x0065 PACN0) */
#define PACN3 DVUCP(0x0062) /* high */
#define PACN2 DVUCP(0x0063) /* low */
#define PACN1 DVUCP(0x0064) /* high */
#define PACN0 DVUCP(0x0065) /* low */
/* Pulse accumulator holding registers dual access, 8 or 16 bit */
#define PACHUS2 DVUSP(0x0072) /* 16 bit (0x0072 PACH3, 0x0073 PACH2) */
#define PACHUS0 DVUSP(0x0074) /* 16 bit (0x0074 PACH1, 0x0075 PACH0) */
#define PA3H DVUCP(0x0072) /* high */
#define PA2H DVUCP(0x0073) /* low */
#define PA1H DVUCP(0x0074) /* high */
#define PA0H DVUCP(0x0075) /* low */


/* Modulus down counter control registers */
#define MCCTL DVUCP(0x0066) /* Modulus control register */
#define MCFLG DVUCP(0x0067) /* Modulus flag (high bit) and input edge indicators (low 4 bits) */
#define MCCNT DVUSP(0x0076) /* 16 bit (0x0076 MCCNT (hi), 0x0077 MCCNT (lo)) */
#define PTMCPSR DVUCP(0x006F) /* Precision prescaler for the modulus down counter */


/* Analog To Digital converter 1 */
/* TODO Configure these and disable the non functional 16 - 23 144 pin section! */
#define ATD1CTL0 DVUCP(0x0080) /* 0 - 3 define which ADC channel to wrap on when doing multiple channels */
#define ATD1CTL1 DVUCP(0x0081) /* External trigger select when enabled in other control register */
#define ATD1CTL2 DVUCP(0x0082) /* bit 7 turns the ADC block on. */
#define ATD1CTL3 DVUCP(0x0083) /* bit 6 means conversion length is 8, bit 2 controls how the registers are used, bits 0 - 1 define freeze mode behaviour */
#define ATD1CTL4 DVUCP(0x0084) /* bit 7 should be zero meaning 10bit ADC, bits 6,5 are the sample period, and 4,3,2,1,0 are the sample frequency clock scaler */
#define ATD1CTL5 DVUCP(0x0085) /* bit 7 sets right justify, bit 5 sets scan mode, bit 4 sets multiplex mode */
//0x0086 ATD1STAT0 DVUCP() /*
//0x0088 ATD1TEST0 DVUCP() /*
//0x0089 ATD1TEST1 DVUCP() /*
//0x008A ATD1STAT2 DVUCP() /*
//0x008B ATD1STAT1 DVUCP() /*
#define ATD1DIEN0 DVUCP(0x008C) /* Digital input enable - these pins are not bonded on the 112 pin package */
#define ATD1DIEN1 DVUCP(0x008D) /* Digital input enable */
//0x008E ATD1PTAD0 DVUCP() /* digital use only */
//0x008F ATD1PTAD1 DVUCP() /* digital use only */
// one short for each hi lo par based on hi address. label with WORD for consistency
#define ATD1_BASE 0x0090
#define ATD1DR0 DVUSP(ATD1_BASE + 0x0) /* 16 bit (0x0090 ATD1DR0H, 0x0091 ATD1DR0L) */ /* SpareADC (NC)		*/
#define ATD1DR1 DVUSP(ATD1_BASE + 0x2) /* 16 bit (0x0092 ATD1DR1H, 0x0093 ATD1DR1L) */ /* SpareADC (NC)		*/
#define ATD1DR2 DVUSP(ATD1_BASE + 0x4) /* 16 bit (0x0094 ATD1DR2H, 0x0095 ATD1DR2L) */ /* SpareADC (NC)		*/
#define ATD1DR3 DVUSP(ATD1_BASE + 0x6) /* 16 bit (0x0096 ATD1DR3H, 0x0097 ATD1DR3L) */ /* SpareADC (NC)		*/
#define ATD1DR4 DVUSP(ATD1_BASE + 0x8) /* 16 bit (0x0098 ATD1DR4H, 0x0099 ATD1DR4L) */ /* SpareADC (NC)		*/
#define ATD1DR5 DVUSP(ATD1_BASE + 0xA) /* 16 bit (0x009A ATD1DR5H, 0x009B ATD1DR5L) */ /* SpareADC (NC)		*/
#define ATD1DR6 DVUSP(ATD1_BASE + 0xC) /* 16 bit (0x009C ATD1DR6H, 0x009D ATD1DR6L) */ /* SpareADC (NC)		*/
#define ATD1DR7 DVUSP(ATD1_BASE + 0xE) /* 16 bit (0x009E ATD1DR7H, 0x009F ATD1DR7L) */ /* SpareADC (NC)		*/


/* NOT bonded on the 112 pin package!! Left here in case of 144 pin FreeMS2 later on. */
//0x00A0 ATD1DR8H
//0x00A1 ATD1DR8L
//0x00A2 ATD1DR9H
//0x00A3 ATD1DR9L
//0x00A4 ATD1DR10H
//0x00A5 ATD1DR10L
//0x00A6 ATD1DR11H
//0x00A7 ATD1DR11L
//0x00A8 ATD1DR12H
//0x00A9 ATD1DR12L
//0x00AA ATD1DR13H
//0x00AB ATD1DR13L
//0x00AC ATD1DR14H
//0x00AD ATD1DR14L
//0x00AE ATD1DR15H
//0x00AF ATD1DR15L
/* NOT bonded on the 112 pin package!! Left here in case of 144 pin FreeMS2 later on. */


/* IIC1 - Inter Intergrated Circuit interface 1 TODO configure and use */
//0x00B0 IBAD DVUCP() /*
//0x00B1 IBFD DVUCP() /*
//0x00B2 IBCR DVUCP() /*
//0x00B3 IBSR DVUCP() /*
//0x00B4 IBDR DVUCP() /*


/* SCI2 */
//0x00B8 SCI2BDH
//0x00B8 SCI2ASR1
//0x00B9 SCI2BDL
//0x00B9 SCI2ACR1
//0x00BA SCI2CR1
//0x00BA SCI2ACR2
//0x00BB SCI2CR2
//0x00BC SCI2SR1
//0x00BD SCI2SR2
//0x00BE SCI2DRH
//0x00BF SCI2DRL


/* SCI3 */
//0x00C0 SCI3BDH
//0x00C0 SCI3ASR1
//0x00C1 SCI3BDL
//0x00C1 SCI3ACR1
//0x00C2 SCI3CR1
//0x00C2 SCI3ACR2
//0x00C3 SCI3CR2
//0x00C4 SCI3SR1
//0x00C5 SCI3SR2
//0x00C6 SCI3DRH
//0x00C7 SCI3DRL


/* SCI0 debug/comms/datalogging TODO this is our primary serial interface for flash loading, setup serial comms software to communicate with MTX or similar for testing. */
#define SCI0_BASE 0x00C8

#define SCI0BD DVUSP(SCI0_BASE + 0x0)		/* #define SCI0BDH DVUCP(0x00C8), #define SCI0BDL DVUCP(0x00C9) (IR and baud control) */
#define SCI0CR1 DVUCP(SCI0_BASE + 0x2)	/* Control reg 1 */

#define SCI0ASR1 DVUCP(SCI0_BASE + 0x0)	/* Status reg 1a (rx flags) */
#define SCI0ACR1 DVUCP(SCI0_BASE + 0x1)	/* Control reg 1a (rx conf) */
#define SCI0ACR2 DVUCP(SCI0_BASE + 0x2)	/* Control reg 2a (rx conf) */

#define SCI0CR2 DVUCP(SCI0_BASE + 0x3)	/* Control reg 2 */
#define SCI0SR1 DVUCP(SCI0_BASE + 0x4)	/* Status reg 1 (isr flags) */
#define SCI0SR2 DVUCP(SCI0_BASE + 0x5)	/* Status reg 2 (config/control) */
#define SCI0DRH DVUCP(SCI0_BASE + 0x6)	/* Data reg high (9th bit bit 7 receive bit 6 send) */
#define SCI0DRL DVUCP(SCI0_BASE + 0x7)	/* Data reg low (read and write for receive and send respectively)*/


/* SCI1 debug/comms/datalogging TODO this is our secondary serial interface, setup serial comms software to communicate with MTX or similar for testing. */
//0x00D0 SCI1BDH
//0x00D1 SCI1BDL
//0x00D2 SCI1CR1

//0x00D0 SCI1ASR1
//0x00D1 SCI1ACR1
//0x00D2 SCI1ACR2

//0x00D3 SCI1CR2
//0x00D4 SCI1SR1
//0x00D5 SCI1SR2
//0x00D6 SCI1DRH
//0x00D7 SCI1DRL


/* SPI0 */
//0x00D8 SPI0CR1
//0x00D9 SPI0CR2
//0x00DA SPI0BR
//0x00DB SPI0SR
//0x00DD SPI0DR


/* IIC0  */
//0x00E0 IBAD
//0x00E1 IBFD
//0x00E2 IBCR
//0x00E3 IBSR
//0x00E4 IBDR


/* SPI1 */
//0x00F0 SPI1CR1
//0x00F1 SPI1CR2
//0x00F2 SPI1BR
//0x00F3 SPI1SR
//0x00F5 SPI1DR


/* SPI2 */
//0x00F8 SPI2CR1
//0x00F9 SPI2CR2
//0x00FA SPI2BR
//0x00FB SPI2SR
//0x00FD SPI2DR


/* Flash Control Registers */
#define FCLKDIV DVUCP(0x0100)	/* Flash Clock Divider Register R/W		*/
#define FSEC DVUCP(0x0101)		/* Flash Security Register R			*/
#define FCNFG DVUCP(0x0103)		/* Flash Configuration Register R/W		*/
#define FPROT DVUCP(0x0104)		/* Flash Protection Register R/W		*/
#define FSTAT DVUCP(0x0105)		/* Flash Status Register R/W			*/
#define FCMD DVUCP(0x0106)		/* Flash Command Register R/W			*/
#define FCTL DVUCP(0x0107)		/* Flash Control Register R				*/

#define FADDR DVUSP(0x0108)		/* Flash Low Address Register R (0x0108 FADDRHI, 0x0109 FADDRLO)	*/
#define FDATA DVUSP(0x010A)		/* Flash High Data Register R (0x010A FDATAHI, 0x010B FDATALO)		*/


/* EEPROM Control Registers TODO learn how to use these to write data to the eeprom through serial comms. */
//0x0110 ECLKDIV
//0x0113 ECNFG
//0x0114 EPROT
//0x0115 ESTAT
//0x0116 ECMD
//0x0118 EADDRHI
//0x0119 EADDRLO
//0x011A EDATAHI
//0x011B EDATALO


//// IM
#define IVBR DVUCP(0x0121) /* Interrupt vector table base location first byte (second is always 0x00) */
#define INT_XGPRIO DVUCP(0x0126)
#define INT_CFADDR DVUCP(0x0127)
#define INT_CFDATA0 DVUCP(0x0128)
#define INT_CFDATA1 DVUCP(0x0129)
#define INT_CFDATA2 DVUCP(0x012A)
#define INT_CFDATA3 DVUCP(0x012B)
#define INT_CFDATA4 DVUCP(0x012C)
#define INT_CFDATA5 DVUCP(0x012D)
#define INT_CFDATA6 DVUCP(0x012E)
#define INT_CFDATA7 DVUCP(0x012F)


/* SCI4 */
//0x0130 SCI4BDH
//0x0130 SCI4ASR1
//0x0131 SCI4BDL
//0x0131 SCI4ACR1
//0x0132 SCI4CR1
//0x0132 SCI4ACR2
//0x0133 SCI4CR2
//0x0134 SCI4SR1
//0x0135 SCI4SR2
//0x0136 SCI4DRH
//0x0137 SCI4DRL


/* SCI5 */
//0x0138 SCI5BDH
//0x0138 SCI5ASR1
//0x0139 SCI5BDL
//0x0139 SCI5ACR1
//0x013A SCI5CR1
//0x013A SCI5ACR2
//0x013B SCI5CR2
//0x013C SCI5SR1
//0x013D SCI5SR2
//0x013E SCI5DRH
//0x013F SCI5DRL


/* CAN0 don't want this for now, leave it disabled too. CAN0CTL1 bit 7 should be set to zero to disable this. */
//0x0140 CAN0CTL0
#define CAN0CTL1 DVUCP(0x0141)
//0x0142 CAN0BTR0
//0x0143 CAN0BTR1
//0x0144 CAN0RFLG
//0x0145 CAN0RIER
//0x0146 CAN0TFLG
//0x0147 CAN0TIER
//0x0148 CAN0TARQ
//0x0149 CAN0TAAK
//0x014A CAN0TBSEL
//0x014B CAN0IDAC
//0x014D CAN0MISC
//0x014E CAN0RXERR
//0x014F CAN0TXERR
//0x0150 â€“ 0x0153 : CAN0IDAR0 â€“ CAN0IDAR3
//0x0154 â€“ 0x0157 : CAN0IDMR0 â€“ CAN0IDMR3
//0x0158 â€“ 0x015B : CAN0IDAR4 â€“ CAN0IDAR7
//0x015C â€“ 0x015F : CAN0IDMR4 â€“ CAN0IDMR7
//0x0160 â€“ 0x016F : CAN0RXFG
//0x0170 â€“ 0x017F : CAN0TXFG


//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
//this block applies to all can maps!!!
//
//0xXXX0
//Extended ID
//Standard ID
//CANxRIDR0
//0xXXX1
//Extended ID
//Standard ID
//CANxRIDR1
//0xXXX2
//Extended ID
//Standard ID
//CANxRIDR2
//0xXXX3
//Extended ID
//Standard ID
//CANxRIDR3
//
//0xXXX4â€“
//0xXXXB
//CANxRDSR0â€“
//CANxRDSR7
//0xXXXC CANRxDLR
//0xXXXD Reserved
//0xXXXE CANxRTSRH
//0xXXXF CANxRTSRL
//0xXX10
//Extended ID
//CANxTIDR0
//Standard ID
//
//0xXX0x
//XX10
//Extended ID
//CANxTIDR1
//Standard ID
//0xXX12
//Extended ID
//CANxTIDR2
//Standard ID
//0xXX13
//Extended ID
//CANxTIDR3
//Standard ID
//
//0xXX14â€“
//0xXX1B
//CANxTDSR0â€“
//CANxTDSR7
//
//0xXX1C CANxTDLR
//0xXX1D CANxTTBPR
//0xXX1E CANxTTSRH
//0xXX1F CANxTTSRL

//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&77


/* CAN1 don't want this for now, leave it disabled too. CAN1CTL1 bit 7 should be set to zero to disable this. */
//0x0180 CAN1CTL0
#define CAN1CTL1 DVUCP(0x0181)
//0x0182 CAN1BTR0
//0x0183 CAN1BTR1
//0x0184 CAN1RFLG
//0x0185 CAN1RIER
//0x0186 CAN1TFLG
//0x0187 CAN1TIER
//0x0188 CAN1TARQ
//0x0189 CAN1TAAK
//0x018A CAN1TBSEL
//0x018B CAN1IDAC
//0x018D CAN1MISC
//0x018E CAN1RXERR
//0x018F CAN1TXERR
//0x0190 CAN1IDAR0
//0x0191 CAN1IDAR1
//0x0192 CAN1IDAR2
//0x0193 CAN1IDAR3
//0x0194 CAN1IDMR0
//0x0195 CAN1IDMR1
//0x0196 CAN1IDMR2
//0x0197 CAN1IDMR3
//0x0198 CAN1IDAR4
//0x0199 CAN1IDAR5
//0x019A CAN1IDAR6
//0x019B CAN1IDAR7
//0x019C CAN1IDMR4
//0x019D CAN1IDMR5
//0x019E CAN1IDMR6
//0x019F CAN1IDMR7
//0x01A0 â€“ 0x01AF : CAN1RXFG
//0x01B0 â€“ 0x01BF : CAN1TXFG


/* CAN2 CAN2CTL1 bit 7 should be set to zero to disable this. */
//0x01C0 CAN2CTL0
//0x01C1 CAN2CTL1
//0x01C2 CAN2BTR0
//0x01C3 CAN2BTR1
//0x01C4 CAN2RFLG
//0x01C5 CAN2RIER
//0x01C6 CAN2TFLG
//0x01C7 CAN2TIER
//0x01C8 CAN2TARQ
//0x01C9 CAN2TAAK
//0x01CA CAN2TBSEL
//0x01CB CAN2IDAC
//0x01CD CAN2MISC
//0x01CE CAN2RXERR
//0x01CF CAN2TXERR
//0x01D0 CAN2IDAR0
//0x01D1 CAN2IDAR1
//0x01D2 CAN2IDAR2
//0x01D3 CAN2IDAR3
//0x01D4 CAN2IDMR0
//0x01D5 CAN2IDMR1
//0x01D6 CAN2IDMR2
//0x01D7 CAN2IDMR3
//0x01D8 CAN2IDAR4
//0x01D9 CAN2IDAR5
//0x01DA CAN2IDAR6
//0x01DB CAN2IDAR7
//0x01DC CAN2IDMR4
//0x01DD CAN2IDMR5
//0x01DE CAN2IDMR6
//0x01DF CAN2IDMR7
//0x01E0 â€“ 0x01EF : CAN2RXFG
//0x01F0 â€“ 0x01FF : CAN2TXFG


/* CAN3 CAN3CTL1 bit 7 should be set to zero to disable this. */
//0x0200 CAN3CTL0
#define CAN3CTL1 DVUCP(0x0201)
//0x0202 CAN3BTR0
//0x0203 CAN3BTR1
//0x0204 CAN3RFLG
//0x0205 CAN3RIER
//0x0206 CAN3TFLG
//0x0207 CAN3TIER
//0x0208 CAN3TARQ
//0x0209 CAN3TAAK
//0x020A CAN3TBSEL
//0x020B CAN3IDAC
//0x020E CAN3RXERR
//0x020F CAN3TXERR
//0x0210 CAN3IDAR0
//0x0211 CAN3IDAR1
//0x0212 CAN3IDAR2
//0x0213 CAN3IDAR3
//0x0214 CAN3IDMR0
//0x0215 CAN3IDMR1
//0x0216 CAN3IDMR2
//0x0217 CAN3IDMR3
//0x0218 CAN3IDAR4
//0x0219 CAN3IDAR5
//0x021A CAN3IDAR6
//0x021B CAN3IDAR7
//0x021C CAN3IDMR4
//0x021D CAN3IDMR5
//0x021E CAN3IDMR6
//0x021F CAN3IDMR7
//0x0220 â€“ 0x022F : CAN3RXFG
//0x0230 â€“ 0x023F : CAN3TXFG


/* CAN4 CAN4CTL1 bit 7 should be set to zero to disable this. */
//0x0280 CAN4CTL0
#define CAN4CTL1 DVUCP(0x0281)
//0x0282 CAN4BTR0
//0x0283 CAN4BTR1
//0x0284 CAN4RFLG
//0x0285 CAN4RIER
//0x0286 CAN4TFLG
//0x0287 CAN4TIER
//0x0288 CAN4TARQ
//0x0289 CAN4TAAK
//0x028A CAN4TBSEL
//0x028B CAN4IDAC
//0x028D CAN4MISC
//0x028E CAN4RXERR
//0x028F CAN4TXERR
//0x0290 CAN4IDAR0
//0x0291 CAN4IDAR1
//0x0292 CAN4IDAR2
//0x0293 CAN4IDAR3
//0x0294 CAN4IDMR0
//0x0295 CAN4IDMR1
//0x0296 CAN4IDMR2
//0x0297 CAN4IDMR3
//0x0298 CAN4IDAR4
//0x0299 CAN4IDAR5
//0x029A CAN4IDAR6
//0x029B CAN4IDAR7
//0x029C CAN4IDMR4
//0x029D CAN4IDMR5
//0x029E CAN4IDMR6
//0x029F CAN4IDMR7
//0x02A0 â€“ 0x02AF : CAN4RXFG
//0x02B0 â€“ 0x02BF : CAN4TXFG


/* ATD0 TODO configure this as ATD inputs and try them out to control rate of flashing of leds etc, or even, which LED's are flashing etc */
#define ATD0CTL0 DVUCP(0x02C0) /* 0 - 2 define which ADC channel to wrap on when doing multiple channels */
#define ATD0CTL1 DVUCP(0x02C1) /* External trigger select when enabled in other control register */
#define ATD0CTL2 DVUCP(0x02C2) /* bit 7 turns the ADC block on. */
#define ATD0CTL3 DVUCP(0x02C3) /* bit 6 means conversion length is 8, bit 2 controls how the registers are used, bits 0 - 1 define freeze mode behaviour */
#define ATD0CTL4 DVUCP(0x02C4) /* bit 7 should be zero meaning 10bit ADC, bits 6,5 are the sample period, and 4,3,2,1,0 are the sample frequency clock scaler */
#define ATD0CTL5 DVUCP(0x02C5) /* bit 7 sets right justify, bit 5 sets scan mode, bit 4 sets multiplex mode */
//0x02C6 ATD0STAT0
//0x02CB ATD0STAT1
#define ATD0DIEN DVUCP(0x02CD) /* Digital input enable */
//0x02CF ATD0PTAD0 digital use only
#define ATD0_BASE 0x02D0 /* Maybe use this with a loop to sample them in a compact way. */
#define ATD0DR0 DVUSP(ATD0_BASE + 0x0) /* 16 bit (0x02D0 ATD0DR0H, 0x02D1 ATD0DR0L) */ /* IAT/MAT on my JimStim setup			*/
#define ATD0DR1 DVUSP(ATD0_BASE + 0x2) /* 16 bit (0x02D2 ATD0DR1H, 0x02D3 ATD0DR1L) */ /* CHT/CLT on my JimStim setup			*/
#define ATD0DR2 DVUSP(ATD0_BASE + 0x4) /* 16 bit (0x02D4 ATD0DR2H, 0x02D5 ATD0DR2L) */ /* TPS/TPS on my JimStim setup			*/
#define ATD0DR3 DVUSP(ATD0_BASE + 0x6) /* 16 bit (0x02D6 ATD0DR3H, 0x02D7 ATD0DR3L) */ /* EGO/O2 on my JimStim setup				*/
#define ATD0DR4 DVUSP(ATD0_BASE + 0x8) /* 16 bit (0x02D8 ATD0DR4H, 0x02D9 ATD0DR4L) */ /* BRV  left of 3 one end of my h1 board	*/
#define ATD0DR5 DVUSP(ATD0_BASE + 0xA) /* 16 bit (0x02DA ATD0DR5H, 0x02DB ATD0DR5L) */ /* MAP   mid of 3 one end of my h1 board	*/
#define ATD0DR6 DVUSP(ATD0_BASE + 0xC) /* 16 bit (0x02DC ATD0DR6H, 0x02DD ATD0DR6L) */ /* AAP right of 3 one end of my h1 board	*/
#define ATD0DR7 DVUSP(ATD0_BASE + 0xE) /* 16 bit (0x02DE ATD0DR7H, 0x02DF ATD0DR7L) */ /* SpareADC/SPARE on my JimStim setup		*/


/* VREG unit, Low Voltage Interrupt and Autonomous Periodical Interrupt */
#define VREGCTRL DVUCP(0x02F1) /* VReg Control Register */
#define VREGAPICL DVUCP(0x02F2) /* Autonomous Periodical Interrupt Control Register */
#define VREGAPITR DVUCP(0x02F3) /* Autonomous Periodical Interrupt Trimming Register */
#define VREGAPIR DVUSP(0x02F4) /* Autonomous Periodical Interrupt Rate High and Low Registers (VREGAPIRH DVUCP(0x02F4), VREGAPIRL DVUCP(0x02F5)) */


#define PWME DVUCP(0x0300) /* PWM enable register */
#define PWMPOL DVUCP(0x0301) /* PWM polarity register */
#define PWMCLK DVUCP(0x0302) /* PWM clock choice register */
#define PWMPRCLK DVUCP(0x0303) /* PWM Clock prescalers (bits 0,1,2 and bits 4,5,6 control 4 pins each) */
#define PWMCAE DVUCP(0x0304) /* PWM Center Align Enable Register */
#define PWMCTL DVUCP(0x0305) /* PWM Concatenate, stop, wait, freeze register */
#define PWMSCLA DVUCP(0x0308) /* PWM Scale A register */
#define PWMSCLB DVUCP(0x0309) /* PWM Scale B register */
#define PWMCNT0 DVUCP(0x030C) /* PWM 8 bit counter	*/
#define PWMCNT1 DVUCP(0x030D) /*					*/
#define PWMCNT2 DVUCP(0x030E) /*					*/
#define PWMCNT3 DVUCP(0x030F) /*					*/
#define PWMCNT4 DVUCP(0x0310) /*					*/
#define PWMCNT5 DVUCP(0x0311) /*					*/
#define PWMCNT6 DVUCP(0x0312) /*					*/
#define PWMCNT7 DVUCP(0x0313) /* PWM 8 bit counter	*/
#define PWMPER0 DVUCP(0x0314) /* PWM period value	*/ /* Ign LED 6 on my JimStim */
#define PWMPER1 DVUCP(0x0315) /*					*/ /* Ign LED 4 on my JimStim */
#define PWMPER2 DVUCP(0x0316) /*					*/ /* Ign LED 2 on my JimStim */
#define PWMPER3 DVUCP(0x0317) /*					*/ /* Ign LED 1 on my JimStim */
#define PWMPER4 DVUCP(0x0318) /*					*/ /* Ign LED 3 on my JimStim */
#define PWMPER5 DVUCP(0x0319) /*					*/ /* Ign LED 5 on my JimStim */
#define PWMPER6 DVUCP(0x031A) /*					*/ /* NC yet */
#define PWMPER7 DVUCP(0x031B) /* PWM period value	*/ /* NC yet */
#define PWMDTY0 DVUCP(0x031C) /* PWM duty cycle value	*/
#define PWMDTY1 DVUCP(0x031D) /*						*/
#define PWMDTY2 DVUCP(0x031E) /*						*/
#define PWMDTY3 DVUCP(0x031F) /*						*/
#define PWMDTY4 DVUCP(0x0320) /*						*/
#define PWMDTY5 DVUCP(0x0321) /*						*/
#define PWMDTY6 DVUCP(0x0322) /*						*/
#define PWMDTY7 DVUCP(0x0323) /* PWM duty cycle value	*/
#define PWMSDN DVUCP(0x0324) /* PWM shutdown behaviour register */

//// DBG
//0x0020 DBGC1 DVUCP() /*
//0x0021 DBGSR DVUCP() /*
//0x0022 DBGTCR DVUCP() /*
//0x0023 DBGC2 DVUCP() /*
//0x0024 DBGTBH DVUCP() /*
//0x0025 DBGTBL DVUCP() /*
//0x0026 DBGCNT DVUCP() /*
//0x0027 DBGSCRX DVUCP() /*
//COMPA 0x0028 DVUCP() /*
//COMPC 0x0028 DVUCP() /*
//DBGXCTL 0x0028 DVUCP() /*
//COMPB 0x0028 DVUCP() /*
//COMPD 0x0028 DVUCP() /*
//0x0029 DBGXAH DVUCP() /*
//0x002A DBGXAM DVUCP() /*
//0x002B DBGXAL DVUCP() /*
//0x002C DBGXDH DVUCP() /*
//0x002D DBGXDL DVUCP() /*
//0x002E DBGXDHM DVUCP() /*
//0x002F DBGXDLM DVUCP() /*


/* All reserved registers/blocks are listed here for reference */

/* 0x003E CTCTL COP test register */
/* 0x006D TIMTST Timer test register */
/* 0x0102 FTSTMOD Flash test register */
/* 0x02C8 ATD0TEST0 ADC test register */
/* 0x02C9 ATD0TEST1 ADC test register */
/* 0x02F0 VREGHTCL VReg test register */
/* 0x0306 PWMTST PWM test register */
/* 0x0307 PWMPRSC PWM test register 2 */
/* 0x030A PWMSCNTA PWM test register 3 */
/* 0x030B PWMSCNTB PWM test register 4 */


/* 0x001D Reserved				*/
/* 0x001F Reserved				*/
/* 0x0012 Reserved				*/
/* 0x0014 - 0x0015 : Reserved	*/
/* 0x0018 - 0x0019 : Reserved	*/
/* 0x0031 Reserved				*/
/* 0x006C Reserved				*/
/* 0x00B5 - 0x00B7 : Reserved	*/
/* 0x0087 Reserved				*/
/* 0x00DC Reserved				*/
/* 0x00DE - 0x00DF : Reserved	*/
/* 0x00E5 - 0x00EF : Reserved	*/
/* 0x00F4 Reserved				*/
/* 0x00F6 Reserved				*/
/* 0x00F7 Reserved				*/
/* 0x00FC Reserved				*/
/* 0x00FE - 0x00FF : Reserved	*/
/* 0x010C - 0x010F : Reserved	*/
/* 0x0111 Reserved				*/
/* 0x0112 Reserved				*/
/* 0x0117 Reserved				*/
/* 0x0120 Reserved				*/
/* 0x0122 - 0x0125 : Reserved	*/
/* 0x014C Reserved				*/
/* 0x018C Reserved				*/
/* 0x01CC Reserved				*/
/* 0x020C - 0x020D : Reserved	*/
/* 0x0246 - 0x0247 : Reserved	*/
/* 0x024F Reserved				*/
/* 0x0270 Reserved				*/
/* 0x0272 Reserved				*/
/* 0x0274 Reserved				*/
/* 0x0276 Reserved				*/
/* 0x028C Reserved				*/
/* 0x02C7 Reserved				*/
/* 0x02CA Reserved				*/
/* 0x02CC Reserved				*/
/* 0x02CE Reserved				*/
/* 0x02E0 â€“ 0x02EF : Reserved	*/
/* 0x02F6 â€“ 0x02FF : Reserved	*/
/* 0x0325 â€“ 0x033F : Reserved	*/
/* 0x0358 â€“ 0x037F : Reserved	*/
/* 0x0383 Reserved				*/
/* 0x039C Reserved				*/
/* 0x03A0 Reserved				*/
/* 0x03A1 Reserved				*/
/* 0x03B0 â€“ 0x07FF : Reserved	*/


/* Clear any accidental use of Reserved from typing mistakes. */
#ifdef Reserved
	#error "We have accidentally defined reserved as Reserved in here, find it and fix it."
#endif


#else
	/* let us know if we are being untidy with headers */
	#warning "Header file 9S12C128_H seen before, sort it out!"
/* end of the wrapper ifdef from the very top */
#endif
