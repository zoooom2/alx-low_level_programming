#include "main.h"

/**
 * @brief The function should work exactly like strncpy
 *
 * @param s1 the string to copy to
 * @param s2 the string to copy from
 * @return int
 */

int _strcmp(char *s1, char *s2)
{
    int index = 0;
    int result;

    while ((s1[index] == s2[index]))
    {
        index++;
    }
    if (s1[index] == s2[index])
    {
        return (0);
    }

    result = s1[index] - s2[index];
    return (result);
}