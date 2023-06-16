#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase,
 *              and then in uppercase, followed by a new line.
 *
 * Return: Always O (Success)
*/

int main(void)
{
char c;
c = 'a';

while (c <= 'z')
{
putchar(c);
c++;
}
c = 'A';

while (c <= 'Z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
