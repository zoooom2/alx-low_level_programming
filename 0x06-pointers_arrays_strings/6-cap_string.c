#include "main.h"

/**
 * @brief capitalize each word in a string
 *
 * @return char*
 */

char *cap_string(char *word)
{
    int index = 0;

    while (word[index] != '\0')
    {
        if (word[index - 1] == ' ' || word[index - 1] == '\t' || word[index - 1] == '\n' || word[index - 1] == ',' || word[index - 1] == ';' || word[index - 1] == '.' || word[index - 1] == '!' || word[index - 1] == '?' || word[index - 1] == '"' || word[index - 1] == '(' || word[index - 1] == ')' || word[index - 1] == '{' || word[index - 1] == '}')
        {
            if (word[index] >= 97 || word[index] <= 122)
            {
                word[index] -= 32;
            }
        }

        index++;
    }

    return (word);
}