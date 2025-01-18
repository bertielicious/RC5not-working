#include "constants.h"

void configOsc(void)
{
    OSCCONbits.IRCF3 = HI;  // 4MHz internal clock
    OSCCONbits.IRCF2 = HI;
    OSCCONbits.IRCF1 = HI;
    OSCCONbits.IRCF0 = HI;
    
    OSCCONbits.SCS1 = HI;
}
