#include <stdio.h>
#include "main.h"

/**
 * main - check if it an alphabet
 * Return: 0 on success
 * 
 */
int _isalpha(int c)
{
    if(isalpha(c) != 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
