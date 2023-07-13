#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - A  function that concatenates two strings.
 * @s1: first string
 * @s2: second char
 * @n: int
 * Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1, len2;

	char *ptr;

	if (s1 != NULL)
		len1 = strlen(s1);
	if (s2 != NULL)
		len2 = strlen(s2);
	if (n < len2)
		len2 = n;

	ptr = malloc((len1 + len2  + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);
	if (s1 == NULL)
		len1 = 0;
	if (s2 == NULL)
		len2 = 0;

	i = 0;

	for (; i < (len1 + len2); i++)
	{
		if (i < len1)
			*(ptr + i) = s1[i];
		else
			*(ptr + i) = s2[i - len1];
	}
	*(ptr + len1 + len2) = '\0';
	return (ptr);
}
