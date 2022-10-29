#include "main.h"

/**
 * string_toupper - lower to upper
 * @s: pointer to char params
 *
 * Return: *s
 */

char *string_toupper(char *_string)
{
    int index = 0;

    while (_string[index] != '\0')
    {
        if (_string[index] >= 'a' && _string[index] <= 'z')
            _string[index] -= 32;
        index++;
    }
    return (_string);
}
