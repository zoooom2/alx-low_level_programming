#include <stdio.h>
#include "main.h"

/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * rone = row, cone = column, d = digits of current result
 * Return: times table
 * add extra space past single digit
 */
void times_table(void)
{
	int a, b, product;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			product = a * b;
			if (b != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (b == 0)
			{
				_putchar('0');
			}
			else if (product >= 10)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else if ((product < 10) && (b != 0))
			{
				_putchar(' ');
				_putchar((product % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
