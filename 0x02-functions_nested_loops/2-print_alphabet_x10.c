#include <stdio.h>
#include "main.h"

/**
 * main - printing of alphabets
 * Return: 0 on success
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
