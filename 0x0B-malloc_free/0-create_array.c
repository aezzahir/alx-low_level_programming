#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Create an array of chars, and initializes it with a char
 * @size: Size of the array
 * @c: Char to initialize the array with
 * Return: Pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *A;
	unsigned int i;

	i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	A = (char *)malloc(size * sizeof(char));

	if (A ==  NULL)
	{
		return (NULL);
	}
	for (; i < size; i++)
	{
		A[i] = c;
	}

	return (A);
}

