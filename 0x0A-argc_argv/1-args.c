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
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
