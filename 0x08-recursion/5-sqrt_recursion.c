#include "main.h"


/**
 * sqrt_recursive_helper - recursive helper function to find square root
 *
 * @n: input number
 * @min: lower bound for guess
 * @max: upper bound for guess
 *
 * Return: square root of @n or -1 if none exists
 */
long int sqrt_recursive_helper(long int n, long int min, long int max)
{
long int guess, guess_squared;

guess = (min + max) / 2;
guess_squared = guess *guess;

if (guess_squared == n)
{
return (guess);
}
else if (min == max)
{
return (-1);
}
else if (guess_squared < n)
{
return (sqrt_recursive_helper(n, guess + 1, max));
}
else
{
return (sqrt_recursive_helper(n, min, guess - 1));
}
}





/**
 * _sqrt_recursion - a function that returns the natural square
 * root of a number.
 * @n: int
 * Return: int
 */

long int _sqrt_recursion(long int n)
{
if (n == 0 || n == 1)
{
return (n);
}
if (n < 0)
{
return (-1);
}
return (sqrt_recursive_helper(n, 1, n));
}
