/*
 * INIT_Init.h
 *
 *  Created on: Jun 12, 2024
 *      Author: ziad
 */

#ifndef HALL_INIT_INIT_INIT_H_
#define HALL_INIT_INIT_INIT_H_

/*********** INCLUDES ***********/
#include "../../MCAL/DIO/DIO_Init.h"
#include "../BCD/BCD_Init.h"
#include "../KEYPAD/KEYPAD_Init.h"
#include "../LCD/LCD_Init.h"
#include "../L298_DC_MOTOR/L298_DC_MOTOR_init.h"

/*********** FUNCTIONS DECLER ***********/
/**
 * @brief  : standard function setup all initializations & directions of all modules.
 * @param1 : void
 * @RetVal : void
 */
void setUp(void);

/**
 * @brief  : standard function loop your Program.
 * @param1 : void
 * @RetVal : void
 */
void Loop(void);

#endif /* HALL_INIT_INIT_INIT_H_ */
