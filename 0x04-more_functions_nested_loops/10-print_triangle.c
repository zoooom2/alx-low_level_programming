#include "main.h"

/**
 * main - to print triangle based on size
 * @size: determines size of triangle
 * Return: void
 */
void print_triangle(int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        int j = i;

        while (i < size)
        {
            _putchar(' ');
        }
        _putchar('#');
        _putchar('\n');
    }
}