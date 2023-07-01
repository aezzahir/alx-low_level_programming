#include "main.h"


/**
 * reverse_array - reverses the content of an array of integers.
 * @a: pointer to an array
 * @n: is the number of elements of the array
 * Return: Void
 */

void reverse_array(int *a, int n)
{
	int i, c;

	i = 0;

	c = '\0';

	while (i < n / 2)
	{
		c = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = c;
		i++;
	}
}
