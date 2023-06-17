#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all the numbers of base 16 in lowercase
 *              followed by a new line.
 *
 * Return: Always O (Success)
*/

int main(void)
{
int i;
i = 0;

while (i < 16)
{
if (i < 10)
{
putchar(i + '0');
}
else
{
putchar(i + 'W');
}
i++;
}
putchar('\n');
return (0);
}
