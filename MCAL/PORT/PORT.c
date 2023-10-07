/*
 * GPIO.c
 *
 *  Created on: Oct 7, 2023
 *      Author: eme
 */


#include <MCAL/PORT/PORT.h>
#include "../../LIB/tm4c123gh6pm.h"

/*Array of data registers*/
extern unsigned long * PORTS[];

/************************************************************************************
 * Service Name: Port_Init
 * Service ID[hex]: 0x00
 * Sync/Async: Synchronous
 * Reentrancy: Non Reentrant
 * Parameters (in): ConfigPtr const Port_ConfigType*
 * Parameters (inout): None
 * Parameters (out): None
 * Return value: None
 * Description: Function to initilizate the port.
 ************************************************************************************/
void Port_Init(const Port_ConfigType* ConfigPtr)
{
    /*TODO*/
}
