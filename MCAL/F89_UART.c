

#include "F89_UART.h"
#include <avr/io.h>
#include <avr/interrupt.h>
#include "../Service_Layer/F91_Queue.h"

void F89_void_UART_Init(unsigned long baud)
{

	unsigned long baudrate = (F_CPU/(16 * baud)) - 1;

	UBRRL =(unsigned char) baudrate;
	UBRRH =(unsigned char) (baudrate >> 8);
	UCSRB = (1 << RXEN) | (1 << TXEN) | (1 << RXCIE);
	UCSRC = (1 << URSEL ) | (1 << UCSZ1) | ( 1 << UCSZ0);
	sei();


}
void F89_void_UART_Write(unsigned char data)
{
	while (! (UCSRA & (1 << UDRE)));
	UDR = data;
}


void F89_void_UART_String( char *data)
{
	int index = 0;
	while (data[index] != 0)
	{
		F89_void_UART_Write(data[index]);
		index ++ ;

	}
}

void F89_void_UART_Read(unsigned char *data)
{
	F91_void_dequeue(data);
}

void F89_void_UART_Read_String(unsigned char *str)
{
	int index = 0;
	for(index = 0 ; F91_int_getsize() ; index ++)
	{

	}
}

ISR(USART_RXC_vect)
{
	F91_void_enqueue(UDR);
}

