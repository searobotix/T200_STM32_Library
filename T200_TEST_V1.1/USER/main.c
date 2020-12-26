#include "delay.h"
#include "sys.h"
#include "usart.h"
#include "timer.h"

////////////////////////////////////////////////////////////////
// T200 测试例程					        															
// 开发板:SeaRobotix STM32 Test Board
// 配套电调: ESC30
// 官方网站: http://searobotix.com/			       	 					
// 修改时间: 2020/12/21				      
// 例程版本: V1.0					       
// 联系邮箱: info@searobotix.com	
// 特别声明: 本程序来源于网络,使用者自行承担一切后果!
////////////////////////////////////////////////////////////////

int main(void)
{
    delay_init();	    	 						//延时函数初始化
    NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); 	
    uart_init(115200);	 						//串口初始化为115200
    TIM3_PWM_Init(199, 7199);	 			//PWM频率=72M/(200*7200)=50Hz
    delay_ms(100);
    TIM_SetCompare2(TIM3, 1500);		// T200 不动
    delay_ms(1000);
		delay_ms(1000);
		delay_ms(1000);
		delay_ms(1000);
		delay_ms(1000);

    while(1)
    {
        TIM_SetCompare2(TIM3, 1600);	// T200 转动，设置范围 1100-1900
    }
}

// Searobotix