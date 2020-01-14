/*	Author: cwu051
 *  Partner(s) Name: Kelly Duong
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
DDRB = 0x00; PORTB = 0xFF;
DDRC = 0xFF; PORTC = 0x00;
unsigned char tempB = 0x00;
unsigned char countA = 0x00;
unsigned char countB = 0x00;
    /* Insert your solution below */
    while (1) {
countA = PINA;
countB = PINB;
for (int i = 0; i < 8; i++) {
if (countA & 0x01) {
tempB = tempB + 1;
}
countA = countA << 1;
}
for (int j = 0; j < 8; j++) {
if (countB & 0x01) {
tempB = tempB + 1;
}
countB = countB << 1;
}
PORTC = tempB;
    }
    return 1;
}
