#include <stdio.h>
#include "main.h"

/**
 * main - prints the alphabet
 * Return: 0 on success
 */
void print_alphabet(void)
{
    for(char i = 'a'; i <= 'z'; i++)
    {
        _putchar(i);
    }
    _putchar('\n');
}