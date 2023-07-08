#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - write its name
 * @argc: nbre of arguments
 * @argv: argument's vector
 * Return: success
 */


int main(int argc, char *argv[])
{
	int sum, i, j;

	sum = 0;

	i = 1;

	j = 0;

	for (; i < argc ; i++)
	{
		for (; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}

