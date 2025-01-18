#include "constants.h"
void configIOC(void)
{
    UCONbits.USBEN = LO;    // USB peripheral is disabled to allow IOC on RA0 pin 19
    INTCONbits.IOCIE = HI;  // enable IOC module
    IOCAPbits.IOCAP0 = HI;  // enable RA0 pin 19 to detect a rising edge by setting IOCAP0
    IOCANbits.IOCAN1 = HI;  // enable RA1 pin 18 to detect a rising edge by setting IOCAP0
}                           