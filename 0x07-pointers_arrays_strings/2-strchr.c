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
    int i, j;

    for (i = 0; i != '\0'; i++)
    {
        if (s[i] == c)
        {
            return (s[i]);
            break;
        }
        else if (s[i + 1] == '\0')
        {
            return ("");
            break;
        }
    }
}