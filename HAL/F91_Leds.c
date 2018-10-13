
#include "../MCAL/F91_DIO.h"
#include "F91_Leds.h"
#include "../Service_Layer/Services_layers.h"

void F91_void_InitLeds(int led_number)
{
	switch (led_number)
	{
	case LED1PIN:
		F91_void_DIO_Initpin(LED1PORT , LED1PIN , OUTPUT);
		break;
	case LED2PIN:
		F91_void_DIO_Initpin(LED2PORT , LED2PIN , OUTPUT);
		break;
	case LED3PIN:
		F91_void_DIO_Initpin(LED3PORT , LED3PIN , OUTPUT);
		break;
	case LED4PIN:
		F91_void_DIO_Initpin(LED4PORT , LED4PIN , OUTPUT);
		break;
	}
}





void F91_void_WriteLeds(int led_number , int dir)
{
	switch (led_number)
	{
	case LED1PIN:
		if(dir)
		{
		F91_void_DIO_Writpin(LED1PORT , LED1PIN , HIGH);
		}else
		{
		F91_void_DIO_Writpin(LED1PORT , LED1PIN , LOW);
		}
		break;
	case LED2PIN:
		if(dir)
		{
		F91_void_DIO_Writpin(LED2PORT , LED2PIN , HIGH);
		}else
		{
		F91_void_DIO_Writpin(LED2PORT , LED2PIN , LOW);
		}
		break;
	case LED3PIN:
		if(dir)
		{
		F91_void_DIO_Writpin(LED3PORT , LED3PIN , HIGH);
		}else
		{
		F91_void_DIO_Writpin(LED3PORT , LED3PIN , LOW);
		}
		break;
	case LED4PIN:
		if(dir)
		{
		F91_void_DIO_Writpin(LED4PORT , LED4PIN , HIGH);
		}else
		{
		F91_void_DIO_Writpin(LED4PORT , LED4PIN , LOW);
		}
		break;
	}
}
