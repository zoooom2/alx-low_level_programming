#include "main.h"

/**
 * @brief a function that prints an integer
 *
 * @param n
 */

void print_number(int n)
{
    int i;
    int tmp = 0;
    int divider = 10;
    int power = 1;
    int num;

    if (n < 0)
    {
        _putchar('-');
        n *= -1;
    }

    while ((n / divider) >= 1)
    {
        divider *= 10;
        ++tmp;
    }

    for (i = tmp; i >= 0; i--)
    {
        tmp = i;
        while (tmp != 0)
        {
            power *= 10;
            tmp--;
        }

        if (n > 9)
        {
            num = n / power;

            _putchar(num + '0');
        }
        else
        {
            _putchar(n + '0');
            power = 0;
        }

        n -= (num * power);
    }
}