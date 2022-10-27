#include "main.h"

/**
 * @brief a function that encodes a string into 1337
 *
 * @return char*
 */

char *leet(char *words)
{
    char table[10] = {'a', 'A', 'o', 'O', 'e', 'E', 't', 'T', 'l', 'L'};
    int num[10] = {4, 4, 0, 0, 3, 3, 7, 7, 1, 1};
    int index = 0;
    int idx = 0;

       for (index = 0; index != '\0'; index++)
    {
        while (words[index] == 'a' || words[index] == 'A' || words[index] == 'o' || words[index] == 'O' || words[index] == 'e' || words[index] == 'E' || words[index] == 't' || words[index] == 'T' || words[index] == 'l' || words[index] == 'L')
        {
            words[index]
        }
    }
}