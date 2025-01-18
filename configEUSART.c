#include "constants.h"
#include <stdio.h>
void configEUSART (void)
{
    TXSTAbits.TXEN = HI;//Setting the TXEN bit of the TXSTA register enables the
                        //transmitter circuitry of the EUSART
                        // Clearing the SYNC bit of the TXSTA register configures the EUSART for
    TXSTAbits.SYNC = LO;//asynchronous operation
    RCSTAbits.SPEN = HI;/*automatically configures the TX/CK I/O pin as an output.
                        If the TX/CK pin is shared with an analog peripheral, the
                        analog I/O function must be disabled by clearing the
                        corresponding ANSEL bit. */
    SPBRG = 12;             // Baud rate = 9600
    
}
