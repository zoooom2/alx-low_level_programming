#include <stdio.h>
/* more headers goes there */

/**
 * main - assigns a random number to n
 * Return: 0 if exited properly
 */
void positive_or_negative(int n)
{
    /* your code goes there */
    if (n > 0)
    {
        printf("%d is positive\n", n);
    }
    else if (n < 0)
    {
        printf("%d is negative\n", n);
    }
    else
    {
        printf("%d is zero\n", n);
    }
}
