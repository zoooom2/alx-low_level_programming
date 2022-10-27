#include <stdio.h>
#include "main.h"

/**
 * @brief a function that encodes a string into 1337
 *
 * @return char*
 */

char *leet(char *words)
{
    char table[10] = {'a', 'A', 'o', 'O', 'e', 'E', 't', 'T', 'l', 'L'};
    char num[10] = {'4', '4', '0', '0', '3', '3', '7', '7', '1', '1'};
    int index, idx;

    // for (index = 0; index != '\0'; index++)
    // {
    //     for (idx = 0; idx < 10; idx++)
    //     {
    //         printf("%c %c", table[index], num[idx]);
    //         if (words[index] == table[idx])
    //         {
    //             words[index] = num[idx];
    //         }
    //     }
    // }

    return (words[0] = 3);
}