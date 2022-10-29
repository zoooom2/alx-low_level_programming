#include "main.h"
#include <stdio.h>
/**
<<<<<<< HEAD
 * rot13 - a function that encodes a string using rot13
 * @s: string to be converted
 *
 * Return: char*
=======
 * rot13 - encoder rot13
 * @s: pointer to string params
 *
 * Return: *s
>>>>>>> 5985222f9c78e6b8619ea2036609db86a3301ec2
 */
char *rot13(char *s)
{
	int i;
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == data1[j])
			{
				s[i] = datarot[j];
				break;
			}
		}
	}
	return (s);
}