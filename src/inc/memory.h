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


/**	@file memory.h
 * @ingroup allHeaders
 * @ingroup globalHeaders
 *
 * @brief Memory usage directives
 *
 * This file is solely for the definition of compiler memory usage directives.
 * Each one is just a short form of the larger statements DFAR and FFAR found
 * near the top of this file.
 *
 * @author Fred Cooke
 */


/* Header file multiple inclusion protection courtesy eclipse Header Template	*/
/* and http://gcc.gnu.org/onlinedocs/gcc-3.1.1/cpp/ C pre processor manual		*/
#ifndef FILE_MEMORY_H_SEEN
#define FILE_MEMORY_H_SEEN


/* http://gcc.gnu.org/onlinedocs/gcc-4.0.0/gcc/Variable-Attributes.html	*/


/* Direct flash blocks */
#define FIXEDCONF1	__attribute__ ((section (".fixedconf1"))) /*  1k unpaged block, primary static configuration.		*/
#define FIXEDCONF2	__attribute__ ((section (".fixedconf2"))) /*  1k unpaged block, secondary static configuration.		*/
#define TEXT1		__attribute__ ((section (".text1")))	  /* 14k unpaged block, must be explicitly used.			*/
#define TEXT		__attribute__ ((section (".text")))		  /* 14k unpaged block, code defaults to being stored here.	*/
/*define SERMON		__attribute__ ((section (".sermon")))	      2k unpaged block, occupied by AN2548 serial monitor. 	*/


/* far shortcut for data */
#define DFAR(label) __attribute__ ((section (label)))
/* far shortcut for functions */
#define FFAR(label) __attribute__ ((far)) __attribute__ ((section (label)))


/* ONLY use the pages below this line for now (Or you won't be able to load them...) */

/* General Purpose Page with PPAGE = 0x38 */
#define FPAGE_F8 FFAR(".fpage38")
#define DPAGE_F8 DFAR(".dpage38")
#define PAGE_F8_PPAGE 0x38

/* Function and large lookup tables for ADC to value mapping */
#define LOOKUPF FFAR(".fpage39")
#define LOOKUPD DFAR(".dpage39")
#define LOOKUP_PPAGE 0x39

/* Fuel tables and the function for copying it up to RAM */
#define FUELTABLESF FFAR(".fpage3A")
#define FUELTABLESD DFAR(".dpage3A")
#define FUELTABLES_PPAGE 0x3A

/* Tunable tables etc and the function for copying them up to RAM */
#define TUNETABLESF FFAR(".fpage3B")
#define TUNETABLESD DFAR(".dpage3B")
#define TUNETABLES_PPAGE 0x3B

/* Timing tables and the function for copying them up to RAM */
#define TIMETABLESF FFAR(".fpage3C")
#define TIMETABLESD DFAR(".dpage3C")
#define TIMETABLES_PPAGE 0x3C

/* General Purpose Page with PPAGE = 0x3D macro names are wrong, but too many files to change to fix for now */
#define FPAGE_FE FFAR(".ppage3D")
#define DPAGE_FE DFAR(".ppage3D")
//#define FPAGE_FE FFAR(".ppage3E")	/* Represents 0x4000 - 0x7FFF ("text1" paged) */
//#define DPAGE_FE DFAR(".ppage3E")	/* Represents 0x4000 - 0x7FFF ("text1" paged) */
//#define FPAGE_FF FFAR(".ppage3F")	/* Represents 0xC000 - 0xFFFF ("text" paged) */
//#define DPAGE_FF DFAR(".ppage3F")	/* Represents 0xC000 - 0xFFFF ("text" paged) */
/* The previous four lines are included for clarity only. */
/* Changes to the memory layout should be reflected in memory.x and Makefile also */


#else
	/* let us know if we are being untidy with headers */
	#warning "Header file MEMORY_H seen before, sort it out!"
/* end of the wrapper ifdef from the very top */
#endif
