#include "main.h"

/**
 * len - len of a string
 * @s: string
 * Return: int
 */


int len(char *s)
{
	int i;

	i = 0;

	while (*s != '\0')
	{
		i++;
		s++;

	}
	return (i);

}


/**
 * is_palindrome - Check if it's a palindrome.
 * @s: string
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	int n;

	n = len(s);

	if (n == 0 || n == 1)
	{
		return (1);
	}
	if (*s != *(s + n - 1))
	{
		return (0);
	}
	else
	{
		*(s + n - 1) = '\0';
		return (is_palindrome(s + 1));
	}
}
