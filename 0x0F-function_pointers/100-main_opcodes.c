#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int i;
i = 0;
int bytes;

if (argc != 2)
{
printf("Error\n");
return (1);
}

bytes = atoi(argv[1]);

if (bytes < 0)
{
printf("Error\n");
return (2);
}

/* Print the opcodes of the main function */
unsigned char *main_ptr = (unsigned char *)main;
for (; i < bytes; i++)
{
printf("%02x", main_ptr[i]);
if (i < bytes - 1)
printf(" ");
}
printf("\n");

return (0);
}
