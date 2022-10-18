#include <stdio.h>
#include "main.h"

/**
 * main - printing multiplication table
 * Return: 0 on success
 * 
 */
void times_table(void)
{
    for(int i=0; i<10; i++)
    {
        for (int j=0; j<10; j++)
        {
            int result = i * j;
            _putchar(result);
            _putchar(', ');
        }
    }
    _putchar('\n');
    return;
}