#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: An input integer
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int i = 0, j;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
	else
<<<<<<< HEAD
	{
		_putchar('\n');
	}

=======
		_putchar('\n');
>>>>>>> 8e7f32bd16c96060ed65c26bdefd27a887484320
}
