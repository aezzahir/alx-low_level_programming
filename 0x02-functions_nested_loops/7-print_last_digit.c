#include "main.h"

/**
 * print_last_digit - Write a function that prints the last digit of a number.
 * @n: The number.
 *
 * Return: 1 and prints + if n is greater than zero,
 * 1 and prints + if n is greater than zero,
 * -1 and prints - if n is less than zero
 */

int print_last_digit(int n)
{
int r;
if (n >= 0)
{
r = n % 10;
_putchar('0' + r);
return (r);
}
else
{
r = (-1 * n) % 10;
_putchar('0' + r);
return (r);
}
}
