/*	FreeMS2 - the open source engine management system

	Copyright 2008, 2009 Fred Cooke
	
	This file is part of the FreeMS2 project.

	FreeMS2 software is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	FreeMS2 software is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with any FreeMS2 software.  If not, see http://www.gnu.org/licenses/

	We ask that if you make any changes to this file you email them upstream to
	us at admin(at)diyefi(dot)org or, even better, fork the code on github.com!

	Thank you for choosing FreeMS2 to run your engine! */


/**	@file memory.x
 *
 * @brief Region definition linker script
 *
 * Memory region location definition file for inclusion into the linker
 * script. It defines the names, types, start addresses and lengths of
 * each memory region available for the linker to populate with code and
 * data. See hc9s12c128elfb.x and regions.x for more information. 
 *
 * A description of what some of this means can be found at the following URLs:
 * - http://www.gnu.org/software/m68hc11/m68hc11_binutils.html
 * - http://m68hc11.serveftp.org/wiki/index.php/FAQ:Link
 *
 * @cond memoryscript
 */


  MEMORY
  {
/*	regs		(r) 	: ORIGIN = 0x0000, LENGTH = 0x0800 /*	2k register space DON'T use! */
	eeprom		(r) 	: ORIGIN = 0x0800, LENGTH = 0x0800 /*	2K of eeprom for now, 4K requires paging */

	/* RAM space split up for tuning and flash burning use as well as GP use */
	data		(rw)	: ORIGIN = 0x3000, LENGTH = 0x1000 /*  ~4k  general purpose RAM */
	/* The TX and RX buffers are slightly larger than 2k because the RX buffer */
	/* needs to also receive a header, checksum and attributes for the data    */
	/* involved and the TX buffer needs to handle all of those two fold.       */
/**/
	/* Flash space in linear space while using the page window (16k + 14k + 2k SM = 30k usable, 2k protected) */
	text1		(rx)	: ORIGIN = 0x4000, LENGTH = 0x3800 /*	Unpaged 14k flash block before page window	*/
	fixedconf1	(rx)	: ORIGIN = 0x7800, LENGTH = 0x0400 /*	Unpaged   1K flash block before page window */
	fixedconf2	(rx)	: ORIGIN = 0x7C00, LENGTH = 0x0400 /*	Unpaged   1K flash block before page window */
	/*ppaged	(rx)	: ORIGIN = 0x8000, LENGTH = 0x4000		16K flash page window, DO NOT USE */
	text		(rx)	: ORIGIN = 0xC000, LENGTH = 0x3780 /*	Unpaged 14K flash block after page window minus serial monitor and vector space */
	/* TODO split the above text and text1 regions into halves or similar to allow us to know how the linear space is being spent, eg perf/required/isr etc */

	/* Are these correct? */
    ppage38	(rx)	: ORIGIN = 0x3F0000, LENGTH = 0x4000
    fpage39	(rx)	: ORIGIN = 0x3F4000, LENGTH = 0x2000
    dpage39	(rx)	: ORIGIN = 0x3F6000, LENGTH = 0x2000
    fpage3A	(rx)	: ORIGIN = 0x3F8000, LENGTH = 0x2000
    dpage3A	(rx)	: ORIGIN = 0x3FA000, LENGTH = 0x2000
    fpage3B	(rx)	: ORIGIN = 0x3FC000, LENGTH = 0x2000
    dpage3B	(rx)	: ORIGIN = 0x3FE000, LENGTH = 0x2000
    fpage3C	(rx)	: ORIGIN = 0x400000, LENGTH = 0x2000
    dpage3C	(rx)	: ORIGIN = 0x402000, LENGTH = 0x2000
    ppage3E	(rx)	: ORIGIN = 0x408000, LENGTH = 0x4000 /* Represents 0x8000 - 0xC000 ("text2" paged) */
/*  ppage3D	(rx)	: ORIGIN = 0x404000, LENGTH = 0x4000 ** Represents 0x4000 - 0x8000 ("text1" paged) */
/*  ppage3F	(rx)	: ORIGIN = 0x40C000, LENGTH = 0x3780 ** Represents 0xC000 - 0xFFFF ("text" paged) */
/*  The previous two lines are included for clarity only. */
/*	Changes to this file should be reflected in memory.h and Makefile also */
  }

  PROVIDE (_stack = 0x4000-1); /* Start the stack immediately after RAM */
  /* Vectors are located via the linker command line, not here. */


/** @endcond */
