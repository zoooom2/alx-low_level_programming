#include <stdio.h>
#include "main.h"

/**
 * _strcat - This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest, and then
 * adds a terminating null byte
 *
 * @dest: the destination string
 * @src: the source string
 * Return: char* when successful
 */

char *_strcat(char *dest, char *src)
{
	int length = 0, index;

	while (dest[length])
	{
		length++;
	}
	for (index = 0; src[index] != '\0'; index++)
	{
		dest[length] = src[index];
		length++;
	}
	dest[length] = '\0';
	return (dest);
}
