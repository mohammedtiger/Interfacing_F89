
#include "../MCAL/F89_UART.h"
#include "util/delay.h"
#include "../HAL/F90_Temperature.h"
#include "stdio.h"
#include "string.h"
#include "../HAL/F91_Leds.h"
#include "../Service_Layer/Services_layers.h"
int main ()
{
	F89_void_UART_Init(9600);

	F91_void_InitLeds(LED1PIN);

	char data [100];
	for(;;)
	{

		int Temp = F90_int_Temp_Read();

		memset(data , 0 , sizeof(data));

		sprintf(data,"Temp : %d\r\n" , Temp);

		F89_void_UART_String(data);

		_delay_ms(1000);

		unsigned char data = 0 ;

		F89_void_UART_Read(&data);

		if(data == 'A')
		{
			F91_void_WriteLeds(LED1PIN , HIGH);
		}
		else if(data == 'B')
		{
			F91_void_WriteLeds(LED1PIN , LOW);

		}


	}
	return 0;
}
