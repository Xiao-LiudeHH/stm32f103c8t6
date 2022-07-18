#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h"

int main(void)
{
	
	
	OLED_Init();
	
	
//	OLED_ShowChar(1, 1, 'J');
//	OLED_ShowString(2, 1, "Hello XIOAJIANG!");
//	OLED_ShowNum(1, 3, 0x21, 2);
//	OLED_ShowSignedNum(1, 7, -66, 2);
//	OLED_ShowHexNum(3, 1, 33, 4);
//	OLED_ShowBinNum(4, 1, 33, 8);
	OLED_ShowString(2, 3, "Love You!");
	OLED_ShowString(3, 2, "My ChunHua Baby");
	OLED_ShowString(4, 7, "----Jiang");

	
	while (1)
	{
		
	}
}
