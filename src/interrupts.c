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


/**	@file interrupts.c
 * @ingroup interruptHandlers
 *
 * @brief Interrupt Vector Table
 *
 * This file contains the definition of the interrupt vector table. This
 * table consists only of pointers to void(void) functions that will be
 * called by the hardware when an interrupt of a certain type occurs.
 *
 * @author Fred Cooke
 */


#include "inc/FreeMS2.h"
#include "inc/interrupts.h"


/* Correctly placed in memory due to compiler/linker directives in memory.x and the linker script.	*/
/* This is the FULL table of length 0xFF starting at 0xFF00 and ending at 0xFFFF, redirected with	*/
/* jumps to the offset location by the serial monitor starting at 0xF700 and ending at 0xF800		*/
/* http://m68hc11.serveftp.org/wiki/index.php/FAQ:Interrupts										*/
const interruptTable _vectors[] VECTORS = {

/* 0xFF80 to 0xFF8F */
	LowVoltageISR,	UISR,			UISR,			UISR,			UISR,			UISR,			UISR,			PortPISR,
/*	Low Voltage		IIC1			SCI5			SCI4			SCI3			SCI2			PWM ESDown		Port P		*/
/*																																*/

/* 0xFF90 to 0xFF9F */
	UISR,			UISR,			UISR,			UISR,			UISR,			UISR,			UISR,			UISR,
/*	CAN4 Tx			CAN4 Rx			CAN4 Errors		CAN4 Wakeup		CAN3 Tx			CAN3 Rx			CAN3 Errors		CAN3 Wakeup	*/
/*																																*/

/* 0xFFA0 to 0xFFAF */
	UISR,			UISR,			UISR,			UISR,			UISR,			UISR,			UISR,			UISR,
/*	CAN2 Tx			CAN2 Rx			CAN2 Errors		CAN2 Wakeup		CAN1 Tx			CAN1 Rx			CAN1 Errors		CAN1 Wakeup	*/
/*																																*/

/* 0xFFB0 to 0xFFBF */
	UISR,			UISR,			UISR,			UISR,			UISR,			UISR,			UISR,			UISR,
/*	CAN0 Tx			CAN0 Rx			CAN0 Errors		CAN0 Wakeup		FLASH			EEPROM			SPI2			SPI1		*/
/*																																*/

/* 0xFFC0 to 0xFFCF */
	UISR,			UISR,			UISR,			UISR,			UISR,			ModDownCtrISR,	PortHISR,		PortJISR,
/*	IIC0			Reserved		CRG self clock	CRG PLL lock	PAB Overflow	ModDwnCtrUF		Port H			Port J		*/
/*																																*/

/* 0xFFD0 to 0xFFDF */
	UISR,			UISR,			UISR,			SCI0ISR,		UISR,			UISR,			UISR,			TimerOverflow,
/*	ATD1			ATD0?			SCI1			SCI0			SPI0			PAIE			PAA OF			ECT OF		*/
/*													Serial 0																	*/

/* 0xFFE0 to 0xFFEF */
	Injector6ISR,	Injector5ISR,	Injector4ISR,	Injector3ISR,	Injector2ISR,	Injector1ISR,	SecondaryRPMISR,PrimaryRPMISR,
/*	ECT7			ECT6			ECT5			ECT4			ECT3			ECT2			ECT1			ECT0		*/
/*	Injector 6		Injector 5		Injector 4		Injector 3		Injector 2		Injector 1		Secondary RPM	Primary RPM	*/

/* 0xFFF0 to 0xFFFF */
	RTIISR,			IRQISR,			XIRQISR,		UISR,			UISR,			UISR,			UISR,			_start
/*	RTI				IRQ				XIRQ			SWI				UnimpInstruct	COP Reset		ClockReset		SystemReset	*/
/*																													Entry point */
};
