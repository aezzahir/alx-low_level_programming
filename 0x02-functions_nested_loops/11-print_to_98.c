#include "main.h"

void print_digits(int n);

/**
 * print_to_98 - Function prints all natural numbers from n to 98,
 *               followed by a new line.
 * @n : number
 * Return: void
 */

void print_to_98(int n)
{
int i;
if (n > 98)
{
for (i = n; i >= 98; i--)
{
print_digits(i);
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
else
{
for (i = n; i <= 98; i++)
{
print_digits(i);
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
_putchar('\n');
}

/**
 * print_digits - function prints the digits of an integer.
 * @n: The number.
 * Return: void
*/

void print_digits(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}

if (n / 10)
print_digits(n / 10);

_putchar('0' + n % 10);
}
