#include <stdio.h>
#include "main.h"

/**
 * main - check if it lower than number
 * Return: 0 on success
 * 
 */
int _islower(int c)
{
    if(c >= 'a' && c <= 'z')
    {
        return (1);
    }
    else
    {
        return (0);
    }
}