#include "main.h"

/**
 * print_alphabet - Print the string "_putchar" followed by a new line.
 * No parameters.
 * Return: Nothing (void function)
 */
void print_alphabet(void)
{
int c;
c = 'a';

while (c <= 'z')
{
_putchar(c);
c++;
}

_putchar('\n');
}

