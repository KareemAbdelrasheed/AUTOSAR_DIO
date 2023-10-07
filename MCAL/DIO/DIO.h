/*
 * GPIO.h
 *
 *  Created on: Oct 7, 2023
 *      Author: eme
 */

#ifndef MCAL_DIO_DIO_H_
#define MCAL_DIO_DIO_H_

#include "DIO_TYPES.h"

Dio_LevelType Dio_ReadChannel (Dio_ChannelType ChannelId);
void Dio_WriteChannel ( Dio_ChannelType ChannelId, Dio_LevelType Level);
Dio_PortLevelType Dio_ReadPort (Dio_PortType PortId);
void Dio_WritePort (Dio_PortType PortId, Dio_PortLevelType Level);


#endif /* MCAL_DIO_DIO_H_ */
