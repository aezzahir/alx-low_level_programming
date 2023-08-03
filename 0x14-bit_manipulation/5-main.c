#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;

    n = flip_bits(1, 2);
    printf("%u\n", n);
    n = flip_bits(3, 1);
    printf("%u\n", n);
    n = flip_bits(5, 3);
    printf("%u\n", n);
    n = flip_bits(3, 0);
    printf("%u\n", n);
    return (0);
}
