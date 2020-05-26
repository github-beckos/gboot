/*
 * bsp.c
 *
 *  Created on: May 21, 2020
 *      Author: sea
 */


#include "bsp.h"
#include "leds.h"
#include "usart2.h"

void bsp_init( void )
{
	MX_GPIO_Init( );
	MX_USART2_UART_Init( );
}

