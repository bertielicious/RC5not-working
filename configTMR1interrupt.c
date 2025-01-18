#include "constants.h"
void configTMR1interrupt(void)
{
    PIE1bits.TMR1IE = HI;
    INTCONbits.PEIE = HI;
    INTCONbits.GIE = HI;
}
