#include "main.h"

/**
 * get_endianness - endianness function
 *
 * Return: int
 */
int get_endianness(void)
{
	unsigned int num;
	char *c;

	num = 1;
	c = (char *) &num;

	return ((int)*c);
}

