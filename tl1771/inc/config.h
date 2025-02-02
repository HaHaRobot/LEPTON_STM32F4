#ifndef __CONFIG_H
#define __CONFIG_H

#define _SET_CS_	 		HAL_GPIO_WritePin(GPIOA,GPIO_PIN_10,GPIO_PIN_SET);
#define _CLEAR_CS_ 		HAL_GPIO_WritePin(GPIOA,GPIO_PIN_10,GPIO_PIN_RESET);

#define _SET_BACK_		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_3,GPIO_PIN_SET);
#define _CLEAR_BACK_ 	HAL_GPIO_WritePin(GPIOB,GPIO_PIN_3,GPIO_PIN_RESET);

#define _SET_RD_			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_4,GPIO_PIN_SET);
#define _CLEAR_RD_		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_4,GPIO_PIN_RESET);

#define _SET_RS_			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,GPIO_PIN_SET);
#define _CLEAR_RS_		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,GPIO_PIN_RESET);

#define _SET_WR_			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_8,GPIO_PIN_SET);
#define _CLEAR_WR_		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_8,GPIO_PIN_RESET);

#define _SET_RESET_		HAL_GPIO_WritePin(GPIOA,GPIO_PIN_9,GPIO_PIN_SET);
#define _CLEAR_RESET_	HAL_GPIO_WritePin(GPIOA,GPIO_PIN_9,GPIO_PIN_RESET);

#endif
