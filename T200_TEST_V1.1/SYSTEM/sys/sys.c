#include "sys.h"

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

//THUMBָ�֧�ֻ������
//�������·���ʵ��ִ�л��ָ��WFI  
void WFI_SET(void)
{
	__ASM volatile("wfi");		  
}
//�ر������ж�
void INTX_DISABLE(void)
{		  
	__ASM volatile("cpsid i");
}
//���������ж�
void INTX_ENABLE(void)
{
	__ASM volatile("cpsie i");		  
}
//����ջ����ַ
//addr:ջ����ַ
__asm void MSR_MSP(u32 addr) 
{
    MSR MSP, r0 			//set Main Stack value
    BX r14
}
