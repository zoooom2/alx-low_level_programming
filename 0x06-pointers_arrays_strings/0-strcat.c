#include <stdio.h>
#include "main.h"

/**
 * @brief This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest, and then
 * adds a terminating null byte
 *
 * @param dest the destination string
 * @param src the source string
 * @return char* when successful
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