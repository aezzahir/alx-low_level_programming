#include "main.h"

/**
 * swap_int -  swaps the values of two integers.
 * @a : 1rt int
 * @b : 2nd int
 * Return: void.
 */

void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
