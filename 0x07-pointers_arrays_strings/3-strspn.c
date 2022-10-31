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

    for (i = 0; i != '\0'; i++)
    {
        for (j = 0; j != '\0'; j++)
        {
            if (s[j] == accept[i])
            {
                count++;
                break;
            }
        }
    }
    return count;
}