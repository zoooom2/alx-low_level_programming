#include <stdio.h>

/**
 * main - printing alphabets
 * Return: always zero
 */
int main(void)
{
	char alpha;
	char lower;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	for(lower = 'A'; lower <= 'Z'; lower++)
		putchar(lower);
	putchar('\n');
	return (0);
}

