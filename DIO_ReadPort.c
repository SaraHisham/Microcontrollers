#include "typedefs.h"
#include "dio.h"
#include "port.h"
#include "tm4c123gh6pm.h"

uint8 DIO_ReadPort(uint8 port_index, uint8 pins_mask)
{
	unit8 pins_level;
	
	if(port_index == PORRTA_INDEX)		pins_level = GPIO_PORTA_DATA_R & pins_mask;
  	else if(port_index == PORRTB_INDEX)	pins_level = GPIO_PORTB_DATA_R & pins_mask;
	else if(port_index == PORRTC_INDEX)	pins_level = GPIO_PORTC_DATA_R & pins_mask;
	else if(port_index == PORRTD_INDEX)	pins_level = GPIO_PORTD_DATA_R & pins_mask;
	else if(port_index == PORRTE_INDEX)	pins_level = GPIO_PORTE_DATA_R & pins_mask;
	else if(port_index == PORRTF_INDEX)	pins_level = GPIO_PORTF_DATA_R & pins_mask;

	return pins_level;

}