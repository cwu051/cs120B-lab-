/*	Author: cwu051
 *  Partner(s) Name: Kelly Duong, Chad Wu
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
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
DDRA = 0x00; PORTA = 0xFF;
DDRB = 0xFF; PORTB = 0x00;
unsigned char inputA = 0x00;
unsigned char inputB = 0x00;
    /* Insert your solution below */
    while (1) {
inputA = PINA & 0x01;
inputB = PINA & 0x02;
if ((inputA == 0x01) && (inputB == 0x00)) {
PORTB = 0x01;
}
else {
PORTB = 0x00;
}
    }
    return 1;
}
