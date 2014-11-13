#include "frame_view.h"
// #include "image.h"
#include "DIALOG.h"

void draw_view(void)
{
  /* Configure system clock (SYSCLK) to 180 MHz, at this stage the USB is not used.
     Please note that the USB is not functional if the system clock is set to 180 MHz. */
  // SetSYSCLK_180();

  /* Reconfigure the SysTick following SYSCLK frequency change */
  if (SysTick_Config(SystemCoreClock / 1000))
  { 
    /* Capture error */ 
    while (1);
  }
   
  /* Initialize LEDs, User Button and LCD on STM32F429I-Disco */
  // STM_EVAL_LEDInit(LED3);
  // STM_EVAL_LEDInit(LED4);
  // STM_EVAL_PBInit(BUTTON_USER, BUTTON_MODE_EXTI); 
  
  /* Display message on LCD */ 
  
  // LowLevel_Init();
  
  LCD_Init();
  LCD_LayerInit();
  
  // LTDC reload configuration
  LTDC_ReloadConfig(LTDC_IMReload);
  
  // Enable the LTDC 
  LTDC_Cmd(ENABLE);
  
  // LCD display message 
  LCD_Clear(LCD_COLOR_BLACK);
  // LCD_SetTextColor(LCD_COLOR_BLACK); 
  // LCD_DisplayStringLine(LCD_LINE_3,(uint8_t*)"    V1.0.1     ");
  // LCD_DisplayStringLine(LCD_LINE_5,(uint8_t*)"      PUSH     ");
  // LCD_DisplayStringLine(LCD_LINE_7,(uint8_t*)"  USER BUTTON  ");
  // LCD_DisplayStringLine(LCD_LINE_9,(uint8_t*)"    TO START   ");
  
    
  /* Wait for User button to be pressed */
  //while (STM_EVAL_PBGetState(BUTTON_USER) != Bit_SET)
  
  LCD_SetLayer(LCD_FOREGROUND_LAYER);
  LCD_SetTextColor(0xFF00);
  LCD_DrawFullCircle(100, 20, 20);

  LCD_SetFont(&Font8x8);
  LCD_DisplayStringLine(LCD_LINE_1,(uint8_t*)"  mST PROGRAM ");
  
  while(1)
  {}
}