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


#define PORTS_BA DVUSP(0x0000) // TODO fix XDP512 too ??? address correct? or 0x0001?
#define PORTA DVUCP(0x0000)
#define PORTB DVUCP(0x0001)
#define DDRA DVUCP(0x0002)
#define DDRB DVUCP(0x0003)
//0x0004-0x0007 Reserved
#define PORTE DVUCP(0x0008)
#define DDRE DVUCP(0x0009)
#define PEAR DVUCP(0x000A)
#define MODE DVUCP(0x000B)
#define PUCR DVUCP(0x000C)
#define RDRIV DVUCP(0x000D)
#define EBICTL DVUCP(0x000E)
//0x000F Reserved
#define INITRM DVUCP(0x0010)
#define INITRG DVUCP(0x0011)
#define INITEE DVUCP(0x0012)
#define MISC DVUCP(0x0013)
//0x0014 Reserved
#define ITCR DVUCP(0x0015)
#define ITEST DVUCP(0x0016)
//0x0017-0x0018 Reserved
#define VREGCTRL DVUCP(0x0019)
#define PARTID DVUSP(0x001A)
#define PARTIDH DVUCP(0x001A)
#define PARTIDL DVUCP(0x001B)
#define MEMSIZ0 DVUCP(0x001C)
#define MEMSIZ1 DVUCP(0x001D)
#define INTCR DVUCP(0x001E)
#define HPRIO DVUCP(0x001F)
#define DBGC1 DVUCP(0x0020)
#define DBGSC DVUCP(0x0021)
#define DBGTB DVUSP(0x0022)
#define DBGTBH DVUCP(0x0022)
#define DBGTBL DVUCP(0x0023)
#define DBGCNT DVUCP(0x0024)
#define DBGCCX DVUCP(0x0025)
#define DBGCC DVUSP(0x0026)
#define DBGCCH DVUCP(0x0026)
#define DBGCCL DVUCP(0x0027)
#define DBGC2 DVUCP(0x0028)
#define DBGC3 DVUCP(0x0029)
#define DBGCAX DVUCP(0x002A)
#define DBGCA DVUSP(0x002B)
#define DBGCAH DVUCP(0x002B)
#define DBGCAL DVUCP(0x002C)
#define DBGCBX DVUCP(0x002D)
#define DBGCB DVUSP(0x002E)
#define DBGCBH DVUCP(0x002E)
#define DBGCBL DVUCP(0x002F)
#define PPAGE DVUCP(0x0030)
//0x0031 Reserved
#define PORTK DVUCP(0x0032)
#define DDRK DVUCP(0x0033)
#define SYNR DVUCP(0x0034)
#define REFDV DVUCP(0x0035)
#define CTFLG DVUCP(0x0036)
#define CRGFLG DVUCP(0x0037)
#define CRGINT DVUCP(0x0038)
#define CLKSEL DVUCP(0x0039)
#define PLLCTL DVUCP(0x003A)
#define RTICTL DVUCP(0x003B)
#define COPCTL DVUCP(0x003C)
#define FORBYP DVUCP(0x003D)
#define CTCTL DVUCP(0x003E)
#define ARMCOP DVUCP(0x003F)
#define TIOS DVUCP(0x0040)
#define CFORC DVUCP(0x0041)
#define OC7M DVUCP(0x0042)
#define OC7D DVUCP(0x0043)
#define TCNT DVUSP(0x0044)
//#define  DVUCP(0x0044) TCNT (hi)
//#define  DVUCP(0x0045) TCNT (lo)
#define TSCR1 DVUCP(0x0046)
#define TTOV DVUCP(0x0047)
#define TCTL1 DVUCP(0x0048)
#define TCTL2 DVUCP(0x0049)
#define TCTL1_ADDR AVUCP(0x0048) /* (M,L) 77,66,55,44 */
#define TCTL2_ADDR AVUCP(0x0049) /* (M,L) 33,22,11,00 */
#define TCTL3 DVUCP(0x004A)
#define TCTL4 DVUCP(0x004B)
#define TIE DVUCP(0x004C)
#define TSCR2 DVUCP(0x004D)
#define TFLG DVUCP(0x004E)
#define TFLGOF DVUCP(0x004F)
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

#define PACTL DVUCP(0x0060)
#define PAFLG DVUCP(0x0061)
#define PACNT DVUSP(0x0062)
//0x0064Ð0x007F Reserved
#define ATD0CTL0 DVUCP(0x0080)
#define ATD0CTL1 DVUCP(0x0081)
#define ATD0CTL2 DVUCP(0x0082)
#define ATD0CTL3 DVUCP(0x0083)
#define ATD0CTL4 DVUCP(0x0084)
#define ATD0CTL5 DVUCP(0x0085)
#define ATD0STAT0 DVUCP(0x0086)
//0x0087 Reserved
#define ATD0TEST0 DVUCP(0x0088)
#define ATD0TEST1 DVUCP(0x0089)
//0x008A Reserved
#define ATD0STAT1 DVUCP(0x008B)
//0x008C Reserved
#define ATD0DIEN DVUCP(0x008D)
//0x008E Reserved
//#define PORTAD DVUCP(0x008F)
#define ATD0_BASE 0x0090 /* Maybe use this with a loop to sample them in a compact way. */
#define ATD0DR0 DVUSP(ATD0_BASE + 0x0) /* 16 bit (0x02D0 ATD0DR0H, 0x02D1 ATD0DR0L) */ /* IAT/MAT on my JimStim setup			*/
#define ATD0DR1 DVUSP(ATD0_BASE + 0x2) /* 16 bit (0x02D2 ATD0DR1H, 0x02D3 ATD0DR1L) */ /* CHT/CLT on my JimStim setup			*/
#define ATD0DR2 DVUSP(ATD0_BASE + 0x4) /* 16 bit (0x02D4 ATD0DR2H, 0x02D5 ATD0DR2L) */ /* TPS/TPS on my JimStim setup			*/
#define ATD0DR3 DVUSP(ATD0_BASE + 0x6) /* 16 bit (0x02D6 ATD0DR3H, 0x02D7 ATD0DR3L) */ /* EGO/O2 on my JimStim setup				*/
#define ATD0DR4 DVUSP(ATD0_BASE + 0x8) /* 16 bit (0x02D8 ATD0DR4H, 0x02D9 ATD0DR4L) */ /* BRV  left of 3 one end of my h1 board	*/
#define ATD0DR5 DVUSP(ATD0_BASE + 0xA) /* 16 bit (0x02DA ATD0DR5H, 0x02DB ATD0DR5L) */ /* MAP   mid of 3 one end of my h1 board	*/
#define ATD0DR6 DVUSP(ATD0_BASE + 0xC) /* 16 bit (0x02DC ATD0DR6H, 0x02DD ATD0DR6L) */ /* AAP right of 3 one end of my h1 board	*/
#define ATD0DR7 DVUSP(ATD0_BASE + 0xE) /* 16 bit (0x02DE ATD0DR7H, 0x02DF ATD0DR7L) */ /* SpareADC/SPARE on my JimStim setup		*/
//0x00A0Ð0x00C7 Reserved
#define SCI0BD DVUSP(0x00C8)
#define SCI0CR1 DVUCP(0x00CA)
#define SCI0CR2 DVUCP(0x00CB)
#define SCI0SR1 DVUCP(0x00CC)
#define SCI0SR2 DVUCP(0x00CD)
#define SCI0DRH DVUCP(0x00CE)
#define SCI0DRL DVUCP(0x00CF)
//0x00D0Ð0x00D7 Reserved
#define SPICR1 DVUCP(0x00D8)
#define SPICR2 DVUCP(0x00D9)
#define SPIBR DVUCP(0x00DA)
#define SPISR DVUCP(0x00DB)
//0x00DC Reserved
#define SPIDR DVUCP(0x00DD)
//0x00DE-0x00DF Reserved
#define PWME DVUCP(0x00E0)
#define PWMPOL DVUCP(0x00E1)
#define PWMCLK DVUCP(0x00E2)
#define PWMPRCLK DVUCP(0x00E3)
#define PWMCAE DVUCP(0x00E4)
#define PWMCTL DVUCP(0x00E5)
#define PWMTST DVUCP(0x00E6)
#define PWMPRSC DVUCP(0x00E7)
#define PWMSCLA DVUCP(0x00E8)
#define PWMSCLB DVUCP(0x00E9)
#define PWMSCNTA DVUCP(0x00EA)
#define PWMSCNTB DVUCP(0x00EB)
#define PWMCNT0 DVUCP(0x00EC)
#define PWMCNT1 DVUCP(0x00ED)
#define PWMCNT2 DVUCP(0x00EE)
#define PWMCNT3 DVUCP(0x00EF)
#define PWMCNT4 DVUCP(0x00F0)
#define PWMCNT5 DVUCP(0x00F1)
#define PWMPER0 DVUCP(0x00F2)
#define PWMPER1 DVUCP(0x00F3)
#define PWMPER2 DVUCP(0x00F4)
#define PWMPER3 DVUCP(0x00F5)
#define PWMPER4 DVUCP(0x00F6)
#define PWMPER5 DVUCP(0x00F7)
#define PWMDTY0 DVUCP(0x00F8)
#define PWMDTY1 DVUCP(0x00F9)
#define PWMDTY2 DVUCP(0x00FA)
#define PWMDTY3 DVUCP(0x00FB)
#define PWMDTY4 DVUCP(0x00FC)
#define PWMDTY5 DVUCP(0x00FD)
//0x00FE-0x00FF Reserved
#define FCLKDIV DVUCP(0x0100)
#define FSEC DVUCP(0x0101)
//0x0102 RESERVED1
#define FCNFG DVUCP(0x0103)
#define FPROT DVUCP(0x0104)
#define FSTAT DVUCP(0x0105)
#define FCMD DVUCP(0x0106)
//0x0107 RESERVED21
#define FADDRHI1 DVUCP(0x0108)
#define FADDRLO1 DVUCP(0x0109)
#define FDATAHI1 DVUCP(0x010A)
#define FDATALO1 DVUCP(0x010B)
//0x010CÐ0x013F Reserved
//#define  DVUCP(0x0140) CANCTL0
//#define  DVUCP(0x0141) CANCTL1
//#define  DVUCP(0x0142) CANBTR0
//#define  DVUCP(0x0143) CANBTR1
//#define  DVUCP(0x0144) CANRFLG
//#define  DVUCP(0x0145) CANRIER
//#define  DVUCP(0x0146) CANTFLG
//#define  DVUCP(0x0147) CANTIER
//#define  DVUCP(0x0148) CANTARQ
//#define  DVUCP(0x0149) CANTAAK
//#define  DVUCP(0x014A) CANTBSEL
//#define  DVUCP(0x014B) CANIDAC
//0x014C-0x014D Reserved
//#define  DVUCP(0x014E) CANRXERR
//#define  DVUCP(0x014F) CANTXERR
//#define  DVUCP(0x0150Ð0x0153) CANIDAR0) - CANIDAR3
//#define  DVUCP(0x0154Ð0x0157) CANIDMR0) - CANIDMR3
//#define  DVUCP(0x0158Ð0x015B) CANIDAR4 - CANIDAR7
//#define  DVUCP(0x015CÐ0x015F) CANIDMR4 - CANIDMR7
//#define  DVUCP(0x0160Ð0x016F) CANRXFG
//#define  DVUCP(0x0170Ð0x017F) CANTXFG
//0x0180Ð0x023F Reserved
#define PTT DVUCP(0x0240)
#define PORTT DVUCP(0x0240)
#define PTIT DVUCP(0x0241)
#define DDRT DVUCP(0x0242)
#define RDRT DVUCP(0x0243)
#define PERT DVUCP(0x0244)
#define PPST DVUCP(0x0245)
//0x0246 Reserved
#define MODRR DVUCP(0x0247)
#define PTS DVUCP(0x0248)
#define PORTS DVUCP(0x0248)
#define PTIS DVUCP(0x0249)
#define DDRS DVUCP(0x024A)
#define RDRS DVUCP(0x024B)
#define PERS DVUCP(0x024C)
#define PPSS DVUCP(0x024D)
#define WOMS DVUCP(0x024E)
//0x024F Reserved
#define PTM DVUCP(0x0250)
#define PORTM DVUCP(0x0250)
#define PTIM DVUCP(0x0251)
#define DDRM DVUCP(0x0252)
#define RDRM DVUCP(0x0253)
#define PERM DVUCP(0x0254)
#define PPSM DVUCP(0x0255)
#define WOMM DVUCP(0x0256)
//0x0257 Reserved
#define PTP DVUCP(0x0258)
#define PORTP DVUCP(0x0258)
#define PTIP DVUCP(0x0259)
#define DDRP DVUCP(0x025A)
#define RDRP DVUCP(0x025B)
#define PERP DVUCP(0x025C)
#define PPSP DVUCP(0x025D)
#define PIEP DVUCP(0x025E)
#define PIFP DVUCP(0x025F)
//0x0260-0x0267 Reserved
#define PTJ DVUCP(0x0268)
#define PORTJ DVUCP(0x0268)
#define PTIJ DVUCP(0x0269)
#define DDRJ DVUCP(0x026A)
#define RDRJ DVUCP(0x026B)
#define PERJ DVUCP(0x026C)
#define PPSJ DVUCP(0x026D)
#define PIEJ DVUCP(0x026E)
#define PIFJ DVUCP(0x026F)
#define PTAD DVUCP(0x0270)
#define PTIAD DVUCP(0x0271)
#define DDRAD DVUCP(0x0272)
#define RDRAD DVUCP(0x0273)
#define PERAD DVUCP(0x0274)
#define PPSAD DVUCP(0x0275)
//0x0276-0x03FF Reserved


/* Clear any accidental use of Reserved from typing mistakes. */
#ifdef Reserved
	#error "We have accidentally defined reserved as Reserved in here, find it and fix it."
#endif


#else
	/* let us know if we are being untidy with headers */
	#warning "Header file 9S12C128_H seen before, sort it out!"
/* end of the wrapper ifdef from the very top */
#endif
