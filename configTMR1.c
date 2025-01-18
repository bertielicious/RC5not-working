#include "constants.h"
void configTMR1(void)
{
    T1CONbits.TMR1CS1 = LO;//set clock source to internal Fosc/4
    T1CONbits.TMR1CS0 = LO;// 16MHz/4 = 4MHz
    
    T1CONbits.T1CKPS1 = HI;//set prescaler to divide the count rate by 4, to give a 1us count rate (1/4MHz * 4 = 1us)
    T1CONbits.T1CKPS0 = LO;
    
    T1CONbits.TMR1ON = LO;//turn TMR1 off
    
    TMR1H = 0xf9;// clear TMR1 count registers
    TMR1L = 0x0d;
}
