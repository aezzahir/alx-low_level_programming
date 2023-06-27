#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_VAL 2772
#define MAX_ASCII_VAL 78

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int password[100];
	int i, total, ascii_val;

	total = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		password[i] = rand() % MAX_ASCII_VAL;
		total += (password[i] + '0');
		putchar(password[i] + '0');

		if ((MAX_VAL - total) - '0' < MAX_ASCII_VAL)
		{
			ascii_val = MAX_VAL - total - '0';
			total += ascii_val;
			putchar(ascii_val + '0');
			break;
		}
	}

	return (0);
}
