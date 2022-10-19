#include <stdio.h>
#include "main.h"

/**
 * main - printing of last digit
 * Return: 0 on success
 */
int print_last_digit(int a)
{
	int result = (a % 10);

	if (result < 0)
	{
		result = -1 * result;
	}
	_putchar(result + '0');
	return (result);
}
