#include "main.h"

/**
 * print_triangle - to print triangle based on size
 * @size: determines size of triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		j = i;
		while (i < size)
		{
			_putchar(' ');
		}
		_putchar('#');
		_putchar('\n');
	}
}
