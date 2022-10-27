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
    int length = 0, index;

    while (dest[length])
    {
        length++;
    }

    for (index = 0; index < n && src[index]; index++)
    {
        dest[length] = src[index];
        length++;
    }

    return (dest);
}