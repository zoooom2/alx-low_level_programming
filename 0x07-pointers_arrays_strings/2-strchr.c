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
    char *p;

    for (i = 0; i != '\0'; i++)
    {
        if (s[i] == c)
        {
            for (j = 0; j != '\0'; j++)
            {
                p[j] = s[i];
                i++;
            }
            return p;
            break;
        }
        else if (s[i + 1] == '\0')
        {
            return ("");
            break;
        }
    }
}