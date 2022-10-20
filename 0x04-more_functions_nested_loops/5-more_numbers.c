#include "main.h"

/**
 * more_numbers - to print number from 0 to 9 followed by a new line
 * except for 2 and 4
 * Return: void
 *
 */
void more_numbers(void)
{
    int line;
    int i;

    for (line = 0; line < 10; line++)
    {
        for (i = 0; i < 14; i++)
        {
            if (i > 9)
            {
                _putchar((i / 10) + '0');
            }
            _putchar((i % 10) + '0');
        }
        _putchar('\n');
    }
}
