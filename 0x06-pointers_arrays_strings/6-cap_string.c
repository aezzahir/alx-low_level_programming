#include "main.h"

/**
 * *cap_string - capitalizes all words of a string.
 * @s: String's pointer
 * Return: poiter to the string
 */

char *cap_string(char *s)
{
	int i, j;
	char S[] = {',', ';', '.', '\n', ' ', '\t', '(', ')', '{', '}'};

	i = 0;

	j = 0;

	while (s[i] != '\0')
	{
		j = 0;

		for (; j < 10; j++)
		{
			if ((i == 0 || s[i] == S[j]) && (s[i + 1] > 96 && s[i + 1] < 123))
				s[i + 1] = s[i + 1] - 32;
		}
		
		if (i == 0)
			s[i] -= 32;
		i++;
	}
	return (s);
}
