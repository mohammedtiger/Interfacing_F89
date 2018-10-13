
#include <avr/io.h>
#include "F91_ADC.h"
#include "../MCAL/F91_DIO.h"

void F91_void_ADC_Init(char Mux)
{
	ADMUX = (1 << REFS0) | Mux;
	ADCSRA = (1 << ADEN) |(1 << ADPS1) | (1 << ADPS2)| (1 << ADPS0);
}


int F91_int_ADC_Read(char mux)
{
	F91_void_ADC_Init(mux);
	ADCSRA |=  (1 << ADSC) ;

	while(!(F91_READBIT(ADCSRA, ADIF)));
	F91_SETBIT(ADCSRA, ADIF);

	return ADC;

}
