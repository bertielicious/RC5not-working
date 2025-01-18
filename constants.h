/* 
 * File:   constants.h
 * Author: User
 *
 * Created on 08 January 2025, 20:12
 */

#ifndef CONSTANTS_H
#define	CONSTANTS_H
#include <xc.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#define _XTAL_FREQ 16000000      // Internal clock 4MHz
enum
{
    LO,
    HI
};
uint8_t index = 0;
uint16_t arr[28];
uint8_t i = 0;
#define  LED PORTAbits.RA4
#endif	/* CONSTANTS_H */

