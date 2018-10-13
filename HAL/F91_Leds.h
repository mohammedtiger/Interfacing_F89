/*
 * F91_Leds.h
 *
 *  Created on: Aug 29, 2018
 *      Author: root
 */

#ifndef F91_LEDS_H_
#define F91_LEDS_H_

#include <avr/io.h>

enum
{
	LED1PIN=PA1,
	LED2PIN=PA2,
	LED3PIN=PC6,
	LED4PIN=PC7
};

enum
{
	LED1PORT='A',
	LED2PORT='A',
	LED3PORT='C',
	LED4PORT='C'
};


void F91_void_InitLeds(int led_number);
void F91_void_WriteLeds(int led_number , int dir);




#endif /* F91_LEDS_H_ */
