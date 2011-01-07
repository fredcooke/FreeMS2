/**	@file flashGlobals.h
 *
 * @todo TODO integrate this file with the rest of the masks and other global constants and hash defines etc
 *
 * FreeMS2 - the open source engine management system
 *
 * Copyright 2008, 2009 Sean Keys
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


/* Header file multiple inclusion protection courtesy eclipse Header Template	*/
/* and http://gcc.gnu.org/onlinedocs/gcc-3.1.1/cpp/ C pre processor manual		*/
#ifndef FILE_FLASHGLOBALS_H_SEEN
#define FILE_FLASHGLOBALS_H_SEEN


#define PVIOL 0x20
#define ACCERR 0x10


#else
	/* let us know if we are being untidy with headers */
	#warning "Header file FLASHGLOBALS_H seen before, sort it out!"
/* end of the wrapper ifdef from the very top */
#endif
