#include <stdio.h>
#include <math.h>

void print_largest_prime_factor(long int n);

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
print_largest_prime_factor(612852475143);
return (0);
}


/**
 * print_largest_prime_factor - print prime factor of 612852475143
 * @n : the number
 * Return: Always 0.
 */

void print_largest_prime_factor(long int n)
{
long int i;

while (n % 2 == 0)
{
n = n / 2;
printf("%d\n", 2);
}

for (i = 3; i <= sqrtl(n); i = i + 2)
{
while (n % i == 0)
{
n = n / i;
printf("%ld\n", i);
}
}

if (n > 2)
{
printf("%ld\n", n);
}
}
