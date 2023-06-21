#include "main.h"
void print_digits(int n);

/**
 * print_sum_mltiples_3_and_5 - Functionfunction that prints the n times table,
 *  starting with 0.
 *
 * Return: void
 */

void print_sum_mltiples_3_and_5(void)
{
int multiple_5, multiple_3, _sum, i;
multiple_5 = 0;
multiple_3 = 0;
_sum = 0;
i = 1;
while (multiple_3 < 1024 )
{
multiple_3 = 3 * i;
if( 5 * i < 1024)
{
multiple_5 = 5 * i;
}
else 
{
multiple_5 = 0;
}
_sum += multiple_5 + multiple_3;
i++;
}
print_digits(_sum);
_putchar('\n');
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
