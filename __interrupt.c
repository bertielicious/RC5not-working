#include "constants.h"
#include <stdio.h>
void __interrupt() isr(void)
{
    // interrup triggered by IOCIF && RA0 rising edge?
    if(INTCONbits.IOCIF && IOCAFbits.IOCAF0 == HI)
    {
        arr[i] = HI;
    }
    if(INTCONbits.IOCIF && IOCAFbits.IOCAF1 == HI)
    {
        arr[i] = LO;
    }
    
    if (i <19)
    {
        i = i + 1;
    }
    else
    {
        i = 0;
    }
    printf("%i %i\n", i,arr[i]);
    LED = ~LED;
    INTCONbits.IOCIF = LO; // clear interrupt flags
    IOCAFbits.IOCAF0 = LO;
    IOCAFbits.IOCAF1 = LO;
    TMR1H = 0xf9;
    TMR1L = 0x0d;
}
