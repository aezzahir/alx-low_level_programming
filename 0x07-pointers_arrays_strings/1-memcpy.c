#include "main.h"

/**
 * *_memcpy - copies memory aera 
 * @dest: memory area
 * @src: memory area
 * @n: nombre de bytes
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;

	for ( ; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (dest);
}

