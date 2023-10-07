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


typedef uint8_t Port_PinType;
typedef uint8_t Port_PinModeType;


enum{
    PORT_PIN_IN=0,PORT_PIN_OUT
};


typedef struct{


}Port_ConfigType;

#endif /* MCAL_DIO_DIO_TYPES_H_ */
