#include "led.h"
#include "keyboard.h"

void Delay(unsigned uiMiliSecs)
{
	unsigned long ulCounter;
	for (ulCounter=0; ulCounter<(5455*uiMiliSecs); ulCounter++)
	{
		;
	}
}
//git
int main() 
{
	LedInit();
	KeyboardInit();
	
	while(1)
	{
		switch (eKeyboardRead())
		{
			case BUTTON_1: 
				LedStepRight();	
				break;

			case BUTTON_2: 
				LedStepLeft();	
				break;
			
			default:
				break;
		}
		Delay(100);
	}
}
