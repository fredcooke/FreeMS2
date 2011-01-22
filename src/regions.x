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


/**	@file regions.x
 *
 * @brief Region mapping linker script
 *
 * Code section to memory region mapping definition file for inclusion
 * into the linker script. This file provides rules which map pieces of
 * code and data from named sections into specific named memory regions.
 * See memory.x and hc9s12c128elfb.x for more information.
 *
 * A description of what some of this means can be found at the following URLs:
 * - http://www.gnu.org/software/m68hc11/m68hc11_binutils.html
 * - http://m68hc11.serveftp.org/wiki/index.php/FAQ:Link
 *
 * @cond regionsscript
 */


SECTIONS
{

/*&&&&&&&&&&&&&& RAM Regions &&&&&&&&&&&&&&*/

/* The main RAM region is called "data" and */
/* can be found in the main linker script   */

/* The RAM tuning area. */
/*  .rtune :
  {
    *(.rtune)
  } > rtune */

/* Comms transmission buffer */
/*  .txbuf :
  {
    *(.txbuf)
  } > txbuf */

/* Comms reception buffer */
  .rxbuf :
  {
    *(.rxbuf)
  } > rxbuf

/*&&&&&&&&&&&&&& Linear Flash Regions &&&&&&&&&&&&&&*/

/* Primary linear code and persistent data is called */
/* "text" and can be found in the main linker script */

/* Secondary linear code and persistent data */
  .text1  :
  {
    *(.text1)
  }  > text1

/* This is the flash page window. */
/* We use this as paged blocks not directly so it's commented out. */
/*  .text2  :
  {
    *(.text2)
  }  > text2 */

/* Non live tunable configuration items 1 */
  .fixedconf1  :
  {
    *(.fixedconf1)
  }  > fixedconf1

/* Non live tunable configuration items 1 */
  .fixedconf2  :
  {
    *(.fixedconf2)
  }  > fixedconf2


/*&&&&&&&&&&&&&& Paged Flash Regions &&&&&&&&&&&&&&*/

/* PPAGE 3A is used for fuel tables and setup function */
  .dpage3A  :
  {
    *(.dpage3A)
  }  > dpage3A

  .fpage3A  :
  {
    *(.fpage3A)
  }  > fpage3A

/* PPAGE 3B is used for smaller tunables and setup function */
  .fpage3B  :
  {
    *(.fpage3B)
  }  > fpage3B

/* Data split up into eight chunks to catch size mistakes better */
  .dpage3B :
  {
    *(.dpage3B)
  }  > dpage3B

/* PPAGE 3C is used for timing tables and setup function */
  .dpage3C  :
  {
    *(.dpage3C)
  }  > dpage3C

  .fpage3C  :
  {
    *(.fpage3C)
  }  > fpage3C

/* The rest from this 128k flash module for general code */
  .ppage38  :
  {
    *(.fpage38)
    *(.dpage38)
  }  > ppage38

  .fpage39  :
  {
    *(.fpage39)
  }  > fpage39

  .dpage39  :
  {
    *(.dpage39)
  }  > dpage39

  .ppage3D  : 
  {
    *(.ppage3D)
  }  > ppage3D

/* The following two blocks are included just for clarity */
/* and are the same as text1 and text when paged.         */

/*  .ppage3E  : (text1 / 0x4000 - 0x7FFF)
  {
    *(.ppage3E)
  }  > ppage3E*/

/*  .ppage3F  : (text / 0xC000 - 0xFFFF)
  {
    *(.ppage3F)
  } > ppage3F */
}


/** @endcond */
