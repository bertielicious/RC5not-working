#include <xc.h>
#include "constants.h"
void configPins(void)
{
    CM1CON0 = 0x00;                 // all COMPARATORS off
    CM2CON0 = 0x00;
    CM1CON1 = 0x00;
    CM2CON1 = 0x00;
    TRISAbits.TRISA4 = LO;   // pin 3 LED
    ANSELA = LO;
    
}
