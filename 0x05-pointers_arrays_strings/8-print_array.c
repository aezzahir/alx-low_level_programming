#include "main.h"

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 * @a : array
 * @n : number of element to be printed
 * Return: void.
 */

void print_array(int *a, int n)
{
int i;
i = 0;

while (i < n)
{
printf("%d", a[i]);
if (i != n - 1)
{
printf(", ");
}
i++;
}
printf("\n");
}

