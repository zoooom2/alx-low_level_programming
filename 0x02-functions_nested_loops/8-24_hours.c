#include <stdio.h>
#include "main.h"

/**
 * main - printing of printing time
 * Return: 0 on success
 * 
 */
void jack_bauer(void)
{
    int min;
    int hrs;

   for(hrs=0; hrs< 24; hrs++)
   {
    for(min=0; min<24; min++)
    {
        _putchar((hrs / 10) + '0');
        _putchar((hrs % 10) + '0');
        _putchar(':');        
        _putchar((min / 10) + '0');
        _putchar((min % 10) + '0');
        _putchar('\n');
    }
   }
   return;
}