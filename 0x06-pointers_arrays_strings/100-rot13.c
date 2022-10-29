#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13
 * @s: string to be converted
 *
 * Return: char*
 */
char *rot13(char *s)
{
	int i, j;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; i != '\0'; i++)
	{
		for (j = 0; j != '\0'; j++)
		{
			if (a[j] == s[i] && ((s[i] > 'a' && s[i] < 'z') || (s[i] > 'A' && s[i] < 'Z')))
				s[i] = output[j];
		}
	}
	return (s);
}
