#include "main.h"
void print_digits(int n);
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
print_sum_mltiples_3_and_5();
return (0);
}
/**
 * print_sum_mltiples_3_and_5 - Functionfunction that prints the n times table,
 *  starting with 0.
 *
 * Return: void
 */

void print_sum_mltiples_3_and_5(void)
{
int _sum, i;
_sum = 0;
i = 0;
while (i < 1024)
{
    if (i % 5 == 0 || i % 3 == 0)
    {
        _sum += i;
    }
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
