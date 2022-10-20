#include "main.h"

/**
 * _isdigit - to check if its digit
 * Return: Always 1 if it's digit
 * @d: is the digit to be checked
 *
 */
int _isdigit(int d)
{
	if (d >= 48 && d <= 57)
		return (1);
	return (0);
}
