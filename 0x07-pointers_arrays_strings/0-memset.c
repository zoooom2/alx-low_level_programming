#include "main.h"
/**
 * _memset - Set the value at the specified location
 *
 * @s: The memory area
 * @b: The byte
 * @n: number of byte
 * Return: char* when successful
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return s;
}
