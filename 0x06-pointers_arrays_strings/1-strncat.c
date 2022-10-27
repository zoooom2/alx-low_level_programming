#include <stdio.h>
#include "main.h"
/**
 * @brief is similar to the _strcat function, except that
 * it will use at most n bytes from src
 * src does not need to be null-terminated if it contains n or more bytes
 *
 * @param dest the destination string
 * @param src the source string
 * @param n the number of bytes to append to dest
 * @return char* when successful
 */

char *_strncat(char *dest, char *src, int n)
{
    int length = 0, index;

    while (dest[length])
    {
        length++;
    }

    for (index = 0; index < n && src[index] != '\0'; index++)
        dest[length] = src[index];

    dest[length + index] = '\0';

    return (dest);
}