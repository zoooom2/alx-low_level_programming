#include <stdio.h>
#include "main.h"

/**
 * main - printing of sign of a given number
 * Return: 0 on success
 * 
 */
int print_sign(int n)
{
    if(n > 0)
    {
        _putchar('+');
        return 1;
    }
    else if(n < 0)
    {
        _putchar('-');
        return -1;
    }
    else
    {
        _putchar('0');
        return 0;
    }
}