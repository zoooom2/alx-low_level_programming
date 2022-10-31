#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 *
 * @s: The string
 * @accept: The string to check
 * @return unsigned
 */
unsigned int _strspn(char *s, char *accept)
{
    int i, j;
    unsigned count = 0;

    for (i = 0; accept[i] != '\0'; i++)
    {
        if (accept[i + 1] == '\0')
        {
            count++;
        }
        for (j = 0; s[j] != '\0'; j++)
        {
            if ((s[j] == accept[i]))
            {
                count += 1;
                break;
            }
        }
    }
    return count;
}