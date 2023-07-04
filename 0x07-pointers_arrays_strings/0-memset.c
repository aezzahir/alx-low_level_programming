#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 * @s: pointer to the memory area
 * @b: constant byte
 * @n: number of bytes to fill
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	
	char *p, value;

	p = s;
    
    	value = b;

    	for (i = 0; i < n; i++)
    	{
        	*p = value;
        	p++;
    	}
    	
	return (s);
}

