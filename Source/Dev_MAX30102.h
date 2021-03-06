/*
 * MAX30102: 脉搏和心率传感器MAX30102驱动
 * written by chenm 2020-12-07
*/

#ifndef DEV_MAX30102_H
#define DEV_MAX30102_H

#define HR_MODE 0x00
#define SPO2_MODE 0x01

typedef void (*MAX30102_DataCB_t)(uint16 red, uint16 ir, uint8 activeLED); // callback function to handle one sample data

extern void MAX30102_Init(MAX30102_DataCB_t pfnCB);

extern void MAX30102_Setup(uint8 mode, uint16 sampleRate);

extern void MAX30102_WakeUp();

extern void MAX30102_Shutdown();

extern float MAX30102_ReadTemperature();
#endif

