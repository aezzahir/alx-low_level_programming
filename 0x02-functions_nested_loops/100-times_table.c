#include "main.h"
void print_digits(int n);

/**
 * print_times_table - Functionfunction that prints the n times table,
 *  starting with 0.
 * @n : number
 * Return: void
 */

void print_times_table(int n)
{
if (n >= 0 && n <= 15)
{
int i, j, r, q, k;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
r = i * j;
if (j != 0)
{
q = r;
k = 3;
while (q < 1000  && k > 0)
{
_putchar(' ');
q = q * 10;
k--;
}
}
print_digits(r);
if (j != n)
{
_putchar(',');
}
}
_putchar('\n');
}
}
}

/**
 * print_digits - function prints the digits of an integer.
 * @n: The number.
 * Return: void
*/

void print_digits(int n)
{
if (n / 10)
{
print_digits(n / 10);
}
_putchar('0' + n % 10);
}
