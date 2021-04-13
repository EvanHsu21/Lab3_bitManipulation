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
    while (1) {
	if ((PINA == 1) || (PINA == 2)) {
		PORTC = 0x60;
	}
	else if ((PINA == 3) || (PINA == 4)) {
		PORTC = 0x70;
	}
	else if ((PINA == 5) || (PINA == 6)) {
		PORTC = 0x38;
	}
	else if ((PINA >=  7) && (PINA <= 9)) {
		PORTC = 0x3A;
	}
	else if ((PINA >= 10) && (PINA <= 12)) {
		PORTC = 0x3E;
	}
	else if (PINA >= 13) {
		PORTC = 0x3F;
	}
	else {
		PORTC = 0x40;
	}
	}
    return 1;
}
