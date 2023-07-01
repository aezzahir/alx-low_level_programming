#include "main.h"


/**
 * *_strncpy - copies a string.
 * @dest: string
 * @src: string
 * @n: most n bytes
 * Return: char pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	if (i == n)
	{
		dest[i] = '\0';
	}

	return (dest);
}

