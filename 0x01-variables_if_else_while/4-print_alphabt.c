#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase, followed by a new line.
 *              followed by a new line.
 *
 * Return: Always O (Success)
*/

int main(void)
{
char c;
c = 'a';

while (c <= 'z')
{
if (c != 'q' && c != 'e')
{
putchar(c);
}
c++;
}
putchar('\n');
return (0);
}
