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


/** @file miscISRs.c
 * @ingroup interruptHandlers
 *
 * @brief Miscellaneous Interrupt Handlers
 *
 * Various non-descript interrupt handlers that don't really fit anywhere else
 * and aren't big enough to live on their own just yet.
 *
 * @author Fred Cooke
 */


#include "inc/FreeMS2.h"
#include "inc/interrupts.h"


/** @brief Unimplemented Interrupt Handler
 *
 * Unimplemented interrupt service routine for calls  we weren't expecting.
 * Currently this simply counts bad calls like any other event type.
 *
 * @author Fred Cooke
 */
void UISR(void){
	/* Increment the unimplemented ISR execution counter */
	Counters.callsToUISRs++;
}


/** @brief Port P pins ISR
 *
 * Interrupt handler for edge events on port P pins. Not currently used.
 *
 * @author Fred Cooke
 */
void PortPISR(void){
	/* Clear all port P flags (we only want one at a time) */
	PIFP = ONES;
	/* Increment the unimplemented ISR execution counter */
	Counters.callsToUISRs++;
}			/* Port P interrupt service routine */


/** @brief Port J pins ISR
 *
 * Interrupt handler for edge events on port J pins. Not currently used.
 *
 * @author Fred Cooke
 */
void PortJISR(void){
	/* Clear all port H flags (we only want one at a time) */
	PIFJ = ONES;
	/* Increment the unimplemented ISR execution counter */
	Counters.callsToUISRs++;
}


/** @brief IRQ/PE1 pin ISR
 *
 * Interrupt handler for edge events on the IRQ/PE1 pin. Not currently used.
 *
 * @author Fred Cooke
 */
void IRQISR(void){
	/* Clear the flag */
	// ?? TODO

	/* Increment the unimplemented ISR execution counter */
	Counters.callsToUISRs++;
}


/** @brief XIRQ/PE0 pin ISR
 *
 * Interrupt handler for edge events on the XIRQ/PE0 pin. Not currently used.
 *
 * @author Fred Cooke
 */
void XIRQISR(void){
	/* Clear the flag */
	// ?? TODO

	/* Increment the unimplemented ISR execution counter */
	Counters.callsToUISRs++;
}


/** @brief Low Voltage Counter
 *
 * Count how often our voltage drops lower than it should without resetting.
 *
 * @author Fred Cooke
 */
void LowVoltageISR(void){
	/* Clear the flag */
	VREGCTRL |= 0x01;

	/* Increment the counter */
	Counters.lowVoltageConditions++;
}
