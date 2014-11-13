/**
  */
  
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __STM32F429I_DISCO_DEMO_H
#define __STM32F429I_DISCO_DEMO_H

/* Includes ------------------------------------------------------------------*/
#include "stm32f429i_discovery.h"
#include "stm32f429i_discovery_lcd.h"
#include "stm32f429i_discovery_ioe.h"
#include "stm32f429i_discovery_sdram.h"
#include "stm32f429i_discovery_l3gd20.h"
#include  "usbd_hid_core.h"
#include  "usbd_usr.h"
#include  "usbd_desc.h"


/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
void TimingDelay_Decrement(void);
void Delay(__IO uint32_t nTime);

void start_test(void);
#endif /* __STM32F429I_DISCO_DEMO_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
