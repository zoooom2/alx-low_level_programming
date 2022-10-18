#include <stdio.h>
#include "main.h"

/**
 * main - check if it an alphabet
 * Return: 0 on success
 * 
 */
int _isalpha(int c)
{
    if(((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
