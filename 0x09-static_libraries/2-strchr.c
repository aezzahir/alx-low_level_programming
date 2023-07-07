#include "main.h"


/**
 * *_strchr - that locates a character in a string.
 * @s: string
 * @c: char
 * Return: Return a pointer to first occurence of c
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (*s == c)
		return (s);

	return ('\0');
}

