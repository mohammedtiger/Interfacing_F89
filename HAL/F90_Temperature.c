
#include "../MCAL/F91_ADC.h"
#include "F90_Temperature.h"



float F90_int_Temp_Read()
{
	float temp = F91_int_ADC_Read(ADC_PIN_TEMP);
	return (temp * 4.88)/10;
}
