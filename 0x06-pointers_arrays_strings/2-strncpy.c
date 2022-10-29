#include "main.h"

/**
 * @brief Your function should work exactly like strncpy
 *
 * @param dest the destination string
 * @param src the source string
 * @param n the number of bytes to copy
 * @return char*
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
