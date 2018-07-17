# yenidepo
#include "stm32f0xx_conf.h"
 
//static unsigned char Led_State = 0x00;
  int i;
	int j;
	int A[24]={0,226,0,213,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int B[24];
 

void led(int M[] ){
	   for(i=0;i<24;i++){
		B[i]=M[i];
	   for(j=0;j<8;j++){
		    if(B[i]>127){
				    GPIO_SetBits(GPIOC, GPIO_Pin_8);
               for(i=0;i<8;i++);
             GPIO_ResetBits(GPIOC, GPIO_Pin_8);
				       for(i=0;i<4;i++);
				      }
				else {
				    GPIO_SetBits(GPIOC, GPIO_Pin_8);
					   
             GPIO_ResetBits(GPIOC, GPIO_Pin_8);
					      
				     }
				B[i]=M[i]<<1;
				 		 
		  }
		}
	}
int main(void)
{
    GPIO_InitTypeDef        GPIO_InitStructure;
    TIM_TimeBaseInitTypeDef TIM3_InitStructure;
    NVIC_InitTypeDef        NVIC_InitStructure;
 
    RCC_AHBPeriphClockCmd(RCC_AHBPeriph_GPIOC, ENABLE);
    RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM3, ENABLE);
 
    GPIO_InitStructure.GPIO_Pin   = GPIO_Pin_8;
    GPIO_InitStructure.GPIO_Mode  = GPIO_Mode_OUT;
    GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_Level_1;
    GPIO_InitStructure.GPIO_PuPd  = GPIO_PuPd_NOPULL;
    GPIO_Init(GPIOC,&GPIO_InitStructure);
 
    TIM3_InitStructure.TIM_Prescaler         = 1;
    TIM3_InitStructure.TIM_CounterMode       = TIM_CounterMode_Up;
    TIM3_InitStructure.TIM_Period            = 1;
    TIM3_InitStructure.TIM_ClockDivision     = TIM_CKD_DIV1;
    TIM_TimeBaseInit(TIM3, &TIM3_InitStructure);
    TIM_ITConfig(TIM3, TIM_IT_Update, ENABLE);
 
    NVIC_InitStructure.NVIC_IRQChannel          = TIM3_IRQn;
    NVIC_InitStructure.NVIC_IRQChannelPriority  = 0;
    NVIC_InitStructure.NVIC_IRQChannelCmd       = ENABLE;
    NVIC_Init(&NVIC_InitStructure);
 
   
  
    while(1)
    {
		
		led(A);
		
    	for(i=0;i<510;i++);
    }
}

