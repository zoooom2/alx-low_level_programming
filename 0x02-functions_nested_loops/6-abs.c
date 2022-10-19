#include <stdio.h>
#include "main.h"

/**
 * main - printing absiolutes of numbers
 * Return: 0 on success
 */
int _abs(int a)
{
	return (a * ((a > 0) - (a < 0)));
}
