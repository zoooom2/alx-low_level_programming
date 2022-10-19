#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - a function that print 10 times the alphabet
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	int num;
	char alpha;

	for (num = 0; num < 10; num++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}

}
