#include "main.h"
int is_prime_number_helper(int n, int i);
/**
 * is_prime_number - a function that returns 1 if the input
 * integer is a prime number, otherwise return 0.
 * @n: int
 * Return: int
 */


int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_number_helper(n, 2));
}


/**
 * is_prime_number_helper - a function that returns 1 if the input
 * integer is a prime number, otherwise return 0.
 * @n: int
 * @i: int
 * Return: int
 */


int is_prime_number_helper(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	if (i == n - 1)
	{
		return (1);
	}
	return (is_prime_number_helper(n, i + 1));
}

