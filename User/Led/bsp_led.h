#ifndef __LED_H
#define	__LED_H

#include "stm32f10x.h"


/* 带参宏，可以像内联函数一样使用 */
#define LED1(a)	if (a)	\
					GPIO_SetBits(GPIOA,GPIO_Pin_0);\
					else		\
					GPIO_ResetBits(GPIOA,GPIO_Pin_0)

/* 直接操作寄存器的方法控制IO */
#define	digitalHi(p,i)				{p->BSRR=i;}			//设置为高电平		
#define digitalLo(p,i)				{p->BRR	=i;}				//输出低电平
#define digitalToggle(p,i)		{p->ODR ^=i;}			//输出反转状态


/* 定义控制IO的宏 */
#define LED1_TOGGLE		digitalToggle(GPIOB,GPIO_Pin_0)
#define LED1_OFF			digitalHi(GPIOB,GPIO_Pin_0)
#define LED1_ON				digitalLo(GPIOB,GPIO_Pin_0)

#define LED2_TOGGLE		digitalToggle(GPIOF,GPIO_Pin_7)
#define LED2_OFF			digitalHi(GPIOF,GPIO_Pin_7)
#define LED2_ON				digitalLo(GPIOF,GPIO_Pin_7)

#define LED3_TOGGLE		digitalToggle(GPIOF,GPIO_Pin_8)
#define LED3_OFF			digitalHi(GPIOF,GPIO_Pin_8)
#define LED3_ON				digitalLo(GPIOF,GPIO_Pin_8)

void led_Init(void);

#endif /* __LED_H */
