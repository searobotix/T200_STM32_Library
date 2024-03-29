# T200 STM32 测试例程
STM32 Library for T200 Thrusters

<br/>

## 测试配件

**开发板:** SeaRobotix STM32 Test Board

**配套电调:** ESC30C 

<br/>

## 测试原理

STM32 开发板发送控制命令到 T200 驱动器（ ESC30 电调），T200 驱动器根据收到的参数控制 T200 推进器的转速和转向。

<br/>

## 测试本质

本测试中 STM32 开发板的实质是一个 PWM 波发生器，通过改变 PWM 波参数影响 T200 的转速和转向。

- **PWM 波频率：** 50 Hz（20 ms）

- **中值停转：** 1500 us

- **反转：** 1100-1475 us

- **正转：** 1500-1900 us

- **停转区间：** 1475-1525 us

<br/>

## 技术参数

[ T200 推进器技术参数](http://searobotix.com/t200-thruster/specs/)

<br/>

## 常见问题

[ T200 推进器常见问题 FAQ ](http://searobotix.com/t200-thruster/faq/)

<br/>

## PWM输出端口：GPIOB.5

<br/>
