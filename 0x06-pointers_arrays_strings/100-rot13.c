#include "main.h"

/**
 * @brief a function that encodes a string using rot13
 *
 * @return char*
 */

char *rot13(char *s)
{
    int i, j;
    char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

    for (i = 0; i != '\0'; i++)
    {
        for (j = 0; j != '\0'; j++)
        {
            if (input[j] == s[i])
                s[i] = output[j];
        }
    }

    return (s);
}