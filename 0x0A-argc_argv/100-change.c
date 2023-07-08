#include <stdio.h>
#include <stdlib.h>


/**
 * main - main func
 * @argc: nbre of arg
 * @argv: vector ofa args
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i, cents, coins;
	int values[5] = {25, 10, 5, 2, 1};


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	coins = 0;

	i = 0;

	for (; i < 5; i++)
	{
		coins += cents / values[i];
		cents %= values[i];
	}
	printf("%d\n", coins);
	return (0);
}

