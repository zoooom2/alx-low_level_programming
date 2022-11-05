#include <stdio.h>
#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer
 * @a: integer input
 * Return: absolute value of ab
 */
int _abs(int a)
{
	return (a * ((a > 0) - (a < 0)));
}
