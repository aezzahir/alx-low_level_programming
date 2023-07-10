#include "main.h"
#include <stdlib.h>
#include <string.h>


/**
 * _strdup - function that returns a pointer to a newly allocated
 * space in memory.
 * @str: the string to copy
 * Return: a pointer to the new string or NULL
 */

char *_strdup(char *str)
{
	char *ptr;

	int i, len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;

	while (str[len])
	{
		len++;
	}

	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}

	i = 0;

	for (; i < len; i++)
	{
		ptr[i] = str[i];
	}

	ptr[len] = '\0';

	return (ptr);
}

