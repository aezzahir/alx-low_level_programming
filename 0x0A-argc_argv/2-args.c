#include <stdio.h>
#include "main.h"

/**
 * main - write its name
 * @argc: nbre of arguments
 * @argv: argument's vector
 * Return: success
 */


int main(int argc, char *argv[])
{
	int i;

	i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	(void)argv;
	return (0);
}
