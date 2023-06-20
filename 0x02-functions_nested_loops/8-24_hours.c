#include "main.h"
void to_digit(int n);

/**
 * jack_bauer - Write a function that prints the last digit of a number.
 *
 * Return: void
 */

void jack_bauer(void)
{
int i, j;
for (i = 0; i < 24; i++)
{
for (j = 0; j < 60; j++)
{
to_digit(i);
_putchar(':');
to_digit(j);
_putchar('\n');
}
}
}
/**
 * to_digit - function
 * @n: The number.
 * Retur : digits of number
*/

void to_digit(int n)
{
int r1, r2;
r1 = n % 10;
r2 = (n - r1) / 10;
_putchar('0' + r2);
_putchar('0' + r1);
}

