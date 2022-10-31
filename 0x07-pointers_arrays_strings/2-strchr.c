#include "main.h"

/**
 * _strchr - locates a string
 *
 * @s: string
 * @c: character
 * @return char*
 */
char *_strchr(char *s, char c)
{
    while (*s != '\0')
    {
        if (*s == c)
            return (s);
        s++;
    }
    return (s + 1);
}