#include <stdio.h>

/**
 * fizz_buzz - prints number with fizz_buzz
 * Return: void
 */

void fizz_buzz(void)
{
    int i = 0;

    for (i = 0; i < 100; i++)
    {
        if (i % 3 == 0)
        {
            printf("Fizz ");
        }
        else if (i % 5)
        {
            printf("Buzz ");
        }
        else if (i % 3 && i % 5)
        {
            printf("FizzBuzz ");
        }
        else
        {
            printf("%d", i);
        }
    }
}