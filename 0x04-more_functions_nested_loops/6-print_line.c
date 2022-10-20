#include "main.h"

/**
 * main - prints a line
 * Return: void
 * @n: is how long the line is
 *
 */
void print_line(int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        _putchar('_');
    }
    _putchar('\n');
}