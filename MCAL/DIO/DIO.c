/*
 * GPIO.c
 *
 *  Created on: Oct 7, 2023
 *      Author: eme
 */


#include "../../LIB/tm4c123gh6pm.h"
#include "DIO.h"

/*Array of data registers*/
unsigned long * PORTS[] ={0x400043FC,0x400053FC,0x400063FC,0x400073FC,0x400243FC,0x400253FC};


/************************************************************************************
 * Service Name: Dio_WriteChannel
 * Service ID[hex]: 0x01
 * Sync/Async: Synchronous
 * Reentrancy: Reentrant
 * Parameters (in): ChannelId - ID of DIO channel.
 *                  Level - Value to be written.
 * Parameters (inout): None
 * Parameters (out): None
 * Return value: None
 * Description: Function to set a level of a channel.
 ************************************************************************************/
void Dio_WriteChannel ( Dio_ChannelType ChannelId, Dio_LevelType Level)
{
    if(Level == STD_HIGH )
    {
        *PORTS[ChannelId/8] |= (1<<(ChannelId%8));
    }
    else if(Level == STD_LOW)
    {
        *PORTS[ChannelId/8] &= ~(1<<(ChannelId%8));
    }
    else
    {
        /*Do nothing*/
    }

}
/************************************************************************************
* Service Name: Dio_ReadChannel
* Service ID[hex]: 0x00
* Sync/Async: Synchronous
* Reentrancy: Reentrant
* Parameters (in): ChannelId - ID of DIO channel.
* Parameters (inout): None
* Parameters (out): None
* Return value: Dio_LevelType
* Description: Function to return the value of the specified DIO channel.
************************************************************************************/
Dio_LevelType Dio_ReadChannel (Dio_ChannelType ChannelId)
{
    Dio_LevelType ChannelValue;

    ChannelValue = ((*PORTS[ChannelId/8])>>(ChannelId%8)) & 0x01;

    return ChannelValue;
}
/************************************************************************************
* Service Name: Dio_WritePort
* Service ID[hex]: 0x03
* Sync/Async: Synchronous
* Reentrancy: Reentrant
* Parameters (in): PortId - ID of DIO Port.
*                  Level - Value to be written.
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Service to set a value of the port.
************************************************************************************/
void Dio_WritePort (Dio_PortType PortId, Dio_PortLevelType Level)
{
    *PORTS[PortId] = Level;
}

/************************************************************************************
* Service Name: Dio_ReadPort
* Service ID[hex]: 0x02
* Sync/Async: Synchronous
* Reentrancy: Reentrant
* Parameters (in): PortId - ID of DIO Port.
* Parameters (inout): None
* Parameters (out): None
* Return value: Dio_PortLevelType - Level of all channels of that port.
* Description: Function to return the level of all channels of the specified DIO port.
************************************************************************************/
Dio_PortLevelType Dio_ReadPort (Dio_PortType PortId)
{
    return (*PORTS[PortId]);
}

