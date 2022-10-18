#include <stdio.h>
#include "main.h"

/**
 * main - printing to 98
 * Return: 0 on success
 * 
 */
void print_to_98(int n)
{
   if(n > 98)
   {
    while(n > 98)
    {
        _putchar('n');
        _putchar(', ');
        n--;
    }
   }
   else if (n < 98)
   {
    while(n < 98)
    {
        _putchar('n');
        _putchar(', ');
        n++;
    }
   }
   else{
    putchar('98');
   }
   _putchar('\n');
    return;
}