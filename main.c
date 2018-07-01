#include <stdint.h>
#include "M4MemMap.h"
#include "GPIO.h"
#include "GPIO_Cfg.h"
#include "UART.h"
#include "UART_Cfg.h"
#include "GPS.h"
#include "CAN.h"
#include "CAN_Cfg.h"
/**
 * main.c
 */

#define Number_of_Bytes     500

uint8_t DataCoordinates[22];
uint8_t Longitude[10];
uint8_t Latitude[11];
uint8_t Hours[2];
uint8_t Minutes[2];
uint8_t Seconds[2];
uint8_t Day[2];
uint8_t Month[2];
uint8_t Year[2];
uint8_t Date[6];
int main(void)
{
    GPIO_Init();
    UART_Init();
    GPS_Init();
    //CAN_Init();
    //GPS_Request();
    while(1)
    {
        GPS_SelfTest();
        UART_Rx(1);
        //GPS_GetCoordinates(DataCoordinates);
        //GPS_GetTime(Hours,Minutes,Seconds);
        //GPS_GetDate(Day,Month,Year);
    }
    return 0;
}
