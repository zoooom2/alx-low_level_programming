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
        for (i = 0; i < 10; i++)
        {
            _putchar(i + '0');
        }
        for (i = 1; i <= 4; i++)
        {
            _putchar('1');
            _putchar(i + '0');
        }
    }
}
