#include "main.h"
void two_digits(int n);

/**
 * times_table - Write a function that prints the last digit of a number.
 *
 * Return: void
 */

void times_table(void)
{
int i, j, r;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
r = i * j;
if (r < 10 && j != 0)
{
_putchar(' ');
_putchar('0' + r);
}
else if (j == 0)
{
_putchar('0' + r);
}
else
{
two_digits(r);
}
if (j != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
/**
 * two_digits - function
 * @n: The number.
 * Retur : digits of number
*/

void two_digits(int n)
{
int r1, r2;
r1 = n % 10;
r2 = (n - r1) / 10;
_putchar('0' + r2);
_putchar('0' + r1);
}

