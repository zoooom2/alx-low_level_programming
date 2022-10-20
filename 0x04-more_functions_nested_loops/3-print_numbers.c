#include "main.h"

/**
 * main - to print number from 0 t0 9
 * followed by a new line
 * Return: Always 1 if it's digit
 *
 */
void print_numbers(void)
{
    int i;
    for (i = 0; i < 10; i++)
        _putchar(i + '0');
    _putchar('\n');
}