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
	int result;

	result = 0;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	return (0);
}

