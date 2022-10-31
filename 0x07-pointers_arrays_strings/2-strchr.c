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
        char *p;
        if (s[i] == c)
        {
            for (j = 0; j != '\0'; j++)
            {
                p[j] = s[i];
                i++;
            }

            break;
        }
        else if (s[i + 1] == '\0')
        {
            p = "";
            break;
        }
    }
    return (p);
}