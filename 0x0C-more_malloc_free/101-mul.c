#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * print_error_and_exit - print error & exit
 * Return: void
 */

void print_error_and_exit(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * print_number - print number
 * @number: int
 * Return: void
 */

void print_number(char *number)
{
	int len, i;

	len = strlen(number);

	i = 0;

	for (; i < len; i++)
	{
		printf("%c", number[i]);
	}
	printf("\n");
}

/**
 * is_digit - check if it's a digit
 * @number: int
 * Return: int
 */

int is_digit(char *number)
{
	int len, i;

	len = strlen(number);
	i = 0;

	for (; i < len; i++)
	{
		if (number[i] < '0' || number[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * multiply - multiply
 * @num1: num1
 * @num2: num2
 * Return: void
 */

void multiply(char *num1, char *num2)
{
	long int res,  n1, n2;

	n1 = atoi(num1);
	n2 = atoi(num2);
	res = n1 * n2;

	printf("%ld\n", res);
}
/**
 * main - chec
 * @argc: argc
 * @argv: argv
 * Return: int
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		print_error_and_exit();
	}
	if (!is_digit(argv[1]) || !is_digit(argv[2]))
	{
		print_error_and_exit();
	}
	multiply(argv[1], argv[2]);
	return (0);
}

