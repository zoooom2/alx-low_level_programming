#include <stdio.h>
#include "main.h"
/**
 * _strncat - is similar to the _strcat function, except that
 * it will use at most n bytes from src
 * src does not need to be null-terminated if it contains n or more bytes
 *
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes to append to dest
 * Return: char* when successful
 */

char *_strncat(char *dest, char *src, int n)
{
	int length = 0, index;

	while (dest[length] != '\0')
	{
		length++;
	}
	for (index = 0; index < n && src[index] != '\0'; index++)
		dest[length + index] = src[index];
	dest[length + index] = '\0';
	return (dest);
}
