/*
 * DIO_TYPES.h
 *
 *  Created on: Oct 7, 2023
 *      Author: eme
 */

#ifndef MCAL_DIO_DIO_TYPES_H_
#define MCAL_DIO_DIO_TYPES_H_

#include <stdint.h>

#define STD_LOW   0x00
#define STD_HIGH  0x01


typedef uint8_t Dio_ChannelType;
typedef uint8_t Dio_PortType;
typedef uint8_t Dio_LevelType;
typedef uint16_t Dio_PortLevelType;

enum{
    GPIO_PORTA=0,GPIO_PORTB,GPIO_PORTC,GPIO_PORTD,GPIO_PORTE,GPIO_PORTF
};

/*
typedef struct{

    uint8_t mask;
    uint8_t offset;
    Dio_PortType port;

}Dio_ChannelGroupType;
*/
#endif /* MCAL_DIO_DIO_TYPES_H_ */
