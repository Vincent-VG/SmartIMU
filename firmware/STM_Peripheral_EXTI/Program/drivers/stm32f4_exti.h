/**
 *      __            ____
 *     / /__ _  __   / __/                      __  
 *    / //_/(_)/ /_ / /  ___   ____ ___  __ __ / /_ 
 *   / ,<  / // __/_\ \ / _ \ / __// _ \/ // // __/ 
 *  /_/|_|/_/ \__//___// .__//_/   \___/\_,_/ \__/  
 *                    /_/   github.com/KitSprout    
 * 
 *  @file    stm32f4_exti.h
 *  @author  KitSprout
 *  @date    10-Jun-2018
 *  @brief   
 * 
 */

/* Define to prevent recursive inclusion ---------------------------------------------------*/
#ifndef __STM32F4_EXTI_H
#define __STM32F4_EXTI_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes --------------------------------------------------------------------------------*/
#include "stm32f4_system.h"

/* Define ----------------------------------------------------------------------------------*/
/* Macro -----------------------------------------------------------------------------------*/
/* Typedef ---------------------------------------------------------------------------------*/
/* Variables -------------------------------------------------------------------------------*/
extern pFunc lk_state_event;

/* Prototypes ------------------------------------------------------------------------------*/
/* Functions -------------------------------------------------------------------------------*/
void    LK_STATE_EXTI_Config( pFunc event );

#ifdef __cplusplus
}
#endif

#endif

/*************************************** END OF FILE ****************************************/
