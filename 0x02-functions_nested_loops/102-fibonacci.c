#include "main.h"
void print_digits(long int n);
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
fibonacci_50();
return (0);
}
/**
 * fibonacci_50 - prints the first 50 Fibonacci numbers.
 *  starting with 1, 2.
 *
 * Return: void
 */

void fibonacci_50(void)
{
long int fibonacci1, fibonacci2, fibonacci3;
int i;

fibonacci1 = 1;
fibonacci2 = 2;
print_digits(fibonacci1);
_putchar('\n');
print_digits(fibonacci2);
_putchar('\n');

i = 2;
while (i < 50)
{
fibonacci3 = fibonacci1 + fibonacci2;
print_digits(fibonacci3);
_putchar('\n');
fibonacci1 = fibonacci2;
fibonacci2 = fibonacci3;
i++;
}
}

/**
 * print_digits - function prints the digits of an integer.
 * @n: The number.
 * Return: void
*/

void print_digits(long int n)
{
if (n / 10)
{
print_digits(n / 10);
}
_putchar('0' + n % 10);
}
