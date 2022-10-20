#include "main.h"

/**
 * main - to check if its digit
 * Return: Always 1 if it's digit
 *
 */
int _isdigit(int d)
{
    if (d >= 48 && d <= 57)
        return 1;
    return 0;
}
