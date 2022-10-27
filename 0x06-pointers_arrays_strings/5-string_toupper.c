#include "main.h";

/**
 * @brief  to convert string to uppercase
 *
 * @return char* when successful
 */

char *string_toupper(char *_string)
{
    int index = 0;

    while (_string[index] != '\0')
    {
        if (_string[index] >= 97 && _string[index] <= 122)
            _string[index] -= 32;
        index++;
    }
}