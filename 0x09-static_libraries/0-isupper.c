#include <stdio.h>
#include "main.h"

/**
 * _isupper - check if the alphabet is uppercase
 * Return: Always 1 if exited properly
 *
 * @c: the number to be checked
 *
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
