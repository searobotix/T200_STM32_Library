#include "delay.h"
#include "sys.h"
#include "usart.h"
#include "timer.h"

////////////////////////////////////////////////////////////////
// T200 ��������					        															
// ������:SeaRobotix STM32 Test Board
// ���׵��: ESC30
// �ٷ���վ: http://searobotix.com/			       	 					
// �޸�ʱ��: 2020/12/21				      
// ���̰汾: V1.0					       
// ��ϵ����: info@searobotix.com	
// �ر�����: ��������Դ������,ʹ�������ге�һ�к��!
////////////////////////////////////////////////////////////////

int main(void)
{
    delay_init();	    	 						//��ʱ������ʼ��
    NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); 	
    uart_init(115200);	 						//���ڳ�ʼ��Ϊ115200
    TIM3_PWM_Init(199, 7199);	 			//PWMƵ��=72M/(200*7200)=50Hz
    delay_ms(100);
    TIM_SetCompare2(TIM3, 1500);		// T200 ����
    delay_ms(1000);
		delay_ms(1000);
		delay_ms(1000);
		delay_ms(1000);
		delay_ms(1000);

    while(1)
    {
        TIM_SetCompare2(TIM3, 1600);	// T200 ת�������÷�Χ 1100-1900
    }
}

// Searobotix