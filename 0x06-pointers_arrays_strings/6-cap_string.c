#include "main.h"

/**
 * @brief capitalize each word in a string
 *
 * @return char*
 */

char *cap_string(char *s)
{
	int index, j;
	char options[] = " \t\n,;.!?\"(){}";

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[0] >= 97 && s[0] <= 122)
			s[0] = s[0] - 32;
		for (j = 0; options[j] != '\0'; j++)
			if (s[index] == options[j] && s[index + 1] >= 97 && s[index + 1] <= 122)
				s[index + 1] = s[index + 1] - 32;
	}
	return (s);
}
