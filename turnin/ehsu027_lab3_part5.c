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
	DDRB = 0xFE; PORTB = 0x00;
	DDRD = 0x00; PORTD = 0x00;
    /* Insert your solution below */
    	//unsigned int weight = 0x00;
	while (1) {
	//weight = PIND;
	if (PIND > 70) {
		PORTB = (PORTB | 0x02);
	}
	else if ((PIND > 5) && (PIND < 70)) {
		PORTB = (PORTB | 0x04); 
	}
	else {
		PORTB = (PORTB & 0x01);
	}

}
    return 1;
}
