/*
 * File:   traffic light.c
 * Author: hana
 *
 * Created on 1 December, 2024, 8:45 AM
 */


#include <xc.h>

void main(void) 
{
    long int i;
    while (1)
{
        TRISC = 0x00;
      
        LATC = 0x01; //1=high
        for (i = 0; i < 100000; i++); 
        LATC =0X00;
        
        LATC = 0x02;
        for (i = 0; i < 100000; i++); 
        LATC =0X00;
          
        LATC = 0x04;
        for (i = 0; i < 100000; i++);  
        LATC =0X00;
        
        TRISA = 0X00;
        LATA = 0x01; //1=high
        for (i = 0; i < 100000; i++); 
        LATA =0X00;
        
        LATA = 0x02;
        for (i = 0; i < 100000; i++); 
        LATA =0X00;
        
        LATA = 0x04;
        for (i = 0; i < 100000; i++);  
        LATA =0X00;
        
}        
    return;
}

