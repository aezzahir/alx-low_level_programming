#include "main.h"
void print_digits(long int n);
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
fibonacci_sum();
return (0);
}
/**
 * fibonacci_sum - prints the first 50 Fibonacci numbers.
 *  starting with 1, 2.
 *
 * Return: void
 */

void fibonacci_sum(void)
{
long int fibonacci1, fibonacci2, fibonacci3, _sum;
fibonacci1 = 1;
fibonacci2 = 2;
fibonacci3 = 0;
_sum = fibonacci1;
while (fibonacci3 < 4000000)
{
fibonacci3 = fibonacci1 + fibonacci2;
if(fibonacci3 % 2 == 1)
{
_sum += fibonacci3;  
}
fibonacci1 = fibonacci2;
fibonacci2 = fibonacci3;
}
print_digits(_sum);
_putchar('\n');
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
