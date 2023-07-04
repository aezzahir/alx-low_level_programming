#include "main.h"


/**
 * *_strchr - that locates a character in a string.
 * @s: string
 * @c: char
 * Return: Return a pointer to first occurence of c
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}

	if (*s == c)
		return (s);

	return ('\0');
}

