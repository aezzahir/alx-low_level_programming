#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using
 * @b: int
 * @Return: void
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b * sizeof(int));

	return (ptr);
}

