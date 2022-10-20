#include <stdio.h>
#include "main.h"

/**
 * fizz_buzz - prints number with fizz_buzz
 * Return: void
 */

void fizz_buzz(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		if (i % 3 == 0)
		{
			puts("Fizz ");
		}
		else if (i % 5)
		{
			puts("Buzz ");
		}
		else if (i % 3 && i % 5)
		{
			puts("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
}
