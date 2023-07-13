#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using
 * @b: int
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

