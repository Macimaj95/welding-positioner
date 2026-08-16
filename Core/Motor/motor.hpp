/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    motor.hpp.
  * @brief   This file contains all the function prototypes for
  *          the adc.c file
  * @author	 macie
  * @project welding-positioner
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 Sonictech 
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
#ifndef MOTOR_MOTOR_HPP_
#define MOTOR_MOTOR_HPP_

#include <stdint.h>

typedef enum {
  MV_MOVE_CW, // movement in clockwise direction
  MV_MOVE_BACKWARD // movement in counterclockwise direction
}EM_MovementDireciton_t;

typedef float MV_position_t;
typedef float MV_velocity_t;
typedef float MV_acceleration_t;

class RotaryMotor
{
public:
  MV_position_t target_posion; // target position in radians
  MV_velocity_t target_speed; // target speed in radians/s
  MV_acceleration_t target_acc; // target acceleration in radians/s^2
  MV_acceleration_t target_dec; // target deceleration in radians/s^2

private:

protected:
  MV_position_t act_position; // actual position in radians
  MV_velocity_t act_speed; // acual velocity in radians/s
  MV_acceleration_t act_acc_dec; // actual acceleration
  EM_MovementDireciton_t act_dir; // actual movement direction

};

class DCMotor : public RotaryMotor
{
public:

private:
  uint16_t pwm;

protected:

};




#endif /* MOTOR_MOTOR_HPP_ */
