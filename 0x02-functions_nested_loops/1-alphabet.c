#include <stdio.h>
#include "main.h"

/**
 * main - prints the alphabet
 * Return: 0 on success
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
