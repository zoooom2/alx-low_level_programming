#include "main.h"

/**
 * main - prints a diagonal
 * Return: void
 * @n: is how long the diagonal is
 *
 */
void print_diagonal(int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        int j = i;

        while (j > 0)
        {
            _putchar(' ');
            j--;
        }
        _putchar(92);
        _putchar('\n');
    }
}