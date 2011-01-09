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


/**	@file injectionISRs.c
 * @ingroup interruptHandlers
 *
 * @brief Injection ISR substitutions
 *
 * This file defines the pin specific names for each interrupt and all of it's
 * pin specific variables then imports the actual code from inc/injectorISR.c
 * for each pin such that each one is unique and references a separate set of
 * values specific to it while only maintaining a single copy of the code.
 *
 * @see injectorISR.c
 *
 * @author Fred Cooke
 */


#define INJECTIONISRS_C
#include "inc/FreeMS2.h"
#include "inc/interrupts.h"
#include "inc/injectionISRs.h"


/* Define the variables correctly for each channel then import the code */

/* Channel 1 */
#define INJECTOR_CHANNEL_NUMBER 0
#define InjectorXISR Injector1ISR
#define STAGEDXOFF STAGED1OFF
#define STAGEDXON STAGED1ON
#include "inc/injectorISR.c"
#undef InjectorXISR
#undef STAGEDXOFF
#undef STAGEDXON
#undef INJECTOR_CHANNEL_NUMBER

/* Channel 2 */
#define INJECTOR_CHANNEL_NUMBER 1
#define InjectorXISR Injector2ISR
#define STAGEDXOFF STAGED2OFF
#define STAGEDXON STAGED2ON
#include "inc/injectorISR.c"
#undef InjectorXISR
#undef STAGEDXOFF
#undef STAGEDXON
#undef INJECTOR_CHANNEL_NUMBER

/* Channel 3 */
#define INJECTOR_CHANNEL_NUMBER 2
#define InjectorXISR Injector3ISR
#define STAGEDXOFF STAGED3OFF
#define STAGEDXON STAGED3ON
#include "inc/injectorISR.c"
#undef InjectorXISR
#undef STAGEDXOFF
#undef STAGEDXON
#undef INJECTOR_CHANNEL_NUMBER

/* Channel 4 */
#define INJECTOR_CHANNEL_NUMBER 3
#define InjectorXISR Injector4ISR
#define STAGEDXOFF STAGED4OFF
#define STAGEDXON STAGED4ON
#include "inc/injectorISR.c"
#undef InjectorXISR
#undef STAGEDXOFF
#undef STAGEDXON
#undef INJECTOR_CHANNEL_NUMBER

/* Channel 5 */
#define INJECTOR_CHANNEL_NUMBER 4
#define InjectorXISR Injector5ISR
#define STAGEDXOFF STAGED5OFF
#define STAGEDXON STAGED5ON
#include "inc/injectorISR.c"
#undef InjectorXISR
#undef STAGEDXOFF
#undef STAGEDXON
#undef INJECTOR_CHANNEL_NUMBER

/* Channel 6 */
#define INJECTOR_CHANNEL_NUMBER 5
#define InjectorXISR Injector6ISR
#define STAGEDXOFF STAGED6OFF
#define STAGEDXON STAGED6ON
#include "inc/injectorISR.c"
#undef InjectorXISR
#undef STAGEDXOFF
#undef STAGEDXON
#undef INJECTOR_CHANNEL_NUMBER

/* If switching to 8 OC channels with non-IC engine input, place two more sets of defines here :-) (along with all the other mods needed of course) */
