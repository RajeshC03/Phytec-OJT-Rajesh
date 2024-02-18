#include"stm32f4xx.h"
#include"exti.h"
#define GPIOAEN	(1U<<0)
int main(void)
{


	/*1.Enable clock access to GPIOA*/
	RCC->AHB1ENR |= GPIOAEN;

	/*2.Set PA5 as output pin*/
	GPIOA->MODER |= (1U<<10);
	GPIOA->MODER &=~(1U<<11);



	pc13_exti_init();



	while(1)
	{



	}

}
