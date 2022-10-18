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
        if(hrs < 10)
        {
            _putchar('0');
        }
        _putchar(hrs);
        _putchar(':');
        if(min < 10)
        {
            _putchar('0');
        }
        _putchar(min);
        _putchar("\n");
    }
   }
   return;
}