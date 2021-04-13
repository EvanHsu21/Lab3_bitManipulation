/*	Author: ehsu027
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab 3  Exercise 2
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
	DDRA = 0x00; PORTA = 0x00;
	DDRC = 0xFF; PORTC = 0x00;
    /* Insert your solution below */
	unsigned char maskedPIN = 0x00;
    while (1) {
	maskedPIN = PINA & 0x0F;
	if ((maskedPIN == 1) || (maskedPIN == 2)) {
		PORTC = 0x60;
	}
	else if ((maskedPIN == 3) || (maskedPIN == 4)) {
		PORTC = 0x70;
	}
	else if ((maskedPIN == 5) || (maskedPIN == 6)) {
		PORTC = 0x38;
	}
	else if ((maskedPIN >=  7) && (maskedPIN <= 9)) {
		PORTC = 0x3A;
	}
	else if ((maskedPIN >= 10) && (maskedPIN <= 12)) {
		PORTC = 0x3E;
	}
	else if (maskedPIN >= 13) {
		PORTC = 0x3F;
	}
	else {
		PORTC = 0x40;
	}

	if ((PINA & 0x70) == 0x30) {
		PORTC = PORTC | 0x80;
	}
}
    return 1;
}
