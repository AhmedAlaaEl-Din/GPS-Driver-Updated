#include <stdint.h>
#include "GPS_CallBack.h"
#include "GPS.h"
#include "GPS_Cfg.h"


void LED_ON(void)
{
    uint8_t LED;
    LED = 1;
}
void GPS_SelfTestFunc(void)
{
    SelfTest = GPS_SelfTestOK;
}
