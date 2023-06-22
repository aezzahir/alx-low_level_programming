#include "main.h"
#include <stdio.h>

/**
 * print_triangle - draws a triangle.
 * @size : size of the triangle
 * Return: void.
 */

void print_triangle(int size)
{
int i, j, k, limit;
k = 0;
for (i = 1; i <= size; i++)
{
limit = size - k;
for (j = 1; j <= size; j++)
{
if (j < limit)
{
_putchar(' ');
}
else
{
_putchar('#');
}
}
_putchar('\n');
k = k + 1;
}
if (size <= 0)
{
_putchar('\n');
}
}
