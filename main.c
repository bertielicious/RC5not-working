/*
 * File:   main.c
 * Author: Phil Glazzard
 *
 * Created on 08 January 2025, 20:01
 */


#include "configBits.h"
#include "constants.h"
#include "configPins.h"
#include "configOsc.h"
#include "configIOC.h"
#include "configTMR1.h"
#include "configTMR1interrupt.h"
#include <stdio.h>
#include "configEUSART.h"

void main(void) 
{
    
    configPins();
    configOsc();
    configIOC();
    configTMR1();
    configTMR1interrupt();
    configEUSART();
    printf("hello Philboy!\n");
    while(1)
    {
       /* LED = HI;
        __delay_ms(500);
        LED = LO;
        __delay_ms(500);*/
       // if(i>18)
       // {
          //  for(index = 0; index <20; index++)
         //   {
         //       printf("%i %i\n ",i, arr[index]);
         //   }
         //   break;
        //}
       
    }
}
