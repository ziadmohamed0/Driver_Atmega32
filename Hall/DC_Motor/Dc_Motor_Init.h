/*
 * Dc_Motor_Init.h
 *
 *  Created on: Mar 22, 2024
 *      Author: ziad
 */

#ifndef HALL_DC_MOTOR_DC_MOTOR_INIT_H_
#define HALL_DC_MOTOR_DC_MOTOR_INIT_H_

#include "Dc_Motor_Config.h"


void Motor_Init(void);

void Motor_Forward(u8 CopyMotorNum);
void Motor_Reverse(u8 CopyMotorNum);

void Motor_Off(u8 CopyMotorNum);

#endif /* HALL_DC_MOTOR_DC_MOTOR_INIT_H_ */
