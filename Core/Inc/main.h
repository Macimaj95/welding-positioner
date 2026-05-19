/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define START_Pin GPIO_PIN_0
#define START_GPIO_Port GPIOC
#define ERROR_Pin GPIO_PIN_2
#define ERROR_GPIO_Port GPIOC
#define ENC_CHZ_EXTI3_Pin GPIO_PIN_3
#define ENC_CHZ_EXTI3_GPIO_Port GPIOC
#define ENC_TIM2_CH1_Pin GPIO_PIN_0
#define ENC_TIM2_CH1_GPIO_Port GPIOA
#define ENC_TIM2_CH2_Pin GPIO_PIN_1
#define ENC_TIM2_CH2_GPIO_Port GPIOA
#define SENSOR_Pin GPIO_PIN_2
#define SENSOR_GPIO_Port GPIOA
#define V_SUP_AI3_Pin GPIO_PIN_3
#define V_SUP_AI3_GPIO_Port GPIOA
#define DRIVER_TEMP_AI4_Pin GPIO_PIN_4
#define DRIVER_TEMP_AI4_GPIO_Port GPIOA
#define MOTOR_TEMP_AI5_Pin GPIO_PIN_5
#define MOTOR_TEMP_AI5_GPIO_Port GPIOA
#define KNOB_TIM3_CH1_Pin GPIO_PIN_6
#define KNOB_TIM3_CH1_GPIO_Port GPIOA
#define KNOB_TIM3_CH2_Pin GPIO_PIN_7
#define KNOB_TIM3_CH2_GPIO_Port GPIOA
#define KNOB_PUSH_Pin GPIO_PIN_4
#define KNOB_PUSH_GPIO_Port GPIOC
#define LED_ERROR_Pin GPIO_PIN_5
#define LED_ERROR_GPIO_Port GPIOC
#define LED_WORKING_Pin GPIO_PIN_0
#define LED_WORKING_GPIO_Port GPIOB
#define FORWARD_Pin GPIO_PIN_1
#define FORWARD_GPIO_Port GPIOB
#define RETURN_Pin GPIO_PIN_2
#define RETURN_GPIO_Port GPIOB
#define BACKWARD_Pin GPIO_PIN_10
#define BACKWARD_GPIO_Port GPIOB
#define OLED_CS_Pin GPIO_PIN_12
#define OLED_CS_GPIO_Port GPIOB
#define OLED_Res_Pin GPIO_PIN_6
#define OLED_Res_GPIO_Port GPIOC
#define OLED_DC_Pin GPIO_PIN_7
#define OLED_DC_GPIO_Port GPIOC
#define USART1_DE_Pin GPIO_PIN_8
#define USART1_DE_GPIO_Port GPIOC
#define SENS_1_Pin GPIO_PIN_10
#define SENS_1_GPIO_Port GPIOC
#define SENS_2_Pin GPIO_PIN_11
#define SENS_2_GPIO_Port GPIOC
#define MOTOR_IN1_TIM4_Pin GPIO_PIN_6
#define MOTOR_IN1_TIM4_GPIO_Port GPIOB
#define MOTOR_IN2_TIM4_Pin GPIO_PIN_7
#define MOTOR_IN2_TIM4_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
