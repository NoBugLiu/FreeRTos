#include "stm32f10x.h"  // Device header
#include "freertos.h"
#include "task.h"
#include <stdio.h>

TaskHandle_t  start_handler;//任务句柄
void start_task(void *pvParameters);//函数声明

void User_Init()
{
	/*将以下代码替换为你的初始化代码
	RCC_APB2PeriphClockCmd( RCC_APB2Periph_GPIOC,ENABLE);

	GPIO_InitTypeDef GPIO_InitStruct;
	GPIO_InitStruct.GPIO_Mode=GPIO_Mode_Out_PP;
	GPIO_InitStruct.GPIO_Pin=GPIO_Pin_13;
	GPIO_InitStruct.GPIO_Speed=GPIO_Speed_10MHz;
	GPIO_Init(GPIOC,&GPIO_InitStruct);
	*/
}


int main()
{
	User_Init();
	
	xTaskCreate( start_task,//函数名
							"start_task",  //任务名
                            128,//堆栈大小
                            NULL,//任务函数参数
                            1,//任务优先级
                            &start_handler );//任务句柄
	
	vTaskStartScheduler(); //开始调度
}

void start_task(void *pvParameters)
{
	while(1)
	{
		/*将以下代码替换为你的任务代码
		GPIO_SetBits(GPIOC,GPIO_Pin_13);//高电平
		vTaskDelay(500);
		GPIO_ResetBits(GPIOC,GPIO_Pin_13);//低电平
		vTaskDelay(500);
		*/
	}
}

