#include <stdio.h>
#include "main.h"

/**
 * main - check if the alphabet is uppercase
 * Return: Always 1 if exited properly
 *
 * @c: the number to be checked
 *
 */
int _isupper(char c)
{
    if (c >= 'A' && c <= 'Z')
        return (1);
    return (0);
}