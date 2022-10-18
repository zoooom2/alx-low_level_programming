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
        printf("%d ", n);
        n--;
    }
   }
   else if (n < 98)
   {
    while(n < 98)
    {
        printf("%d ", n);
        n++;
    }
   }
   else{
    printf("%d", n);
   }
   _putchar('\n');
    return;
}