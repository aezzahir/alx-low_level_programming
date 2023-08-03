#include "main.h"

/**
 * get_endianness - A function that checks the endianness of the system.
 * // If the first byte is non-zero, it's little endian, otherwise big endian.
 * Returns: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
unsigned int h = 1;
char *k = (char *)&h;

return (int)*k; 
}
