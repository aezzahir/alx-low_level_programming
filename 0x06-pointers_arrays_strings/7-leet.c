#include "main.h"


/**
 * *leet - encodes a string into 1337.
 * @s: string
 * Return: pointer to string
 */

char *leet(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		switch (s[i])
		{
			case 'a':
				s[i] = '4';
				break;
			case 'A':
				s[i] = '4';
                                break;
			case 'e':
				s[i] = '3';
                                break;
			case 'E':
				s[i] = '3';
                                break;
			case 'o':
				s[i] = '0';
                                break;
			case 'O':
				s[i] = '0';
                                break;
			case 't':
				s[i] = '7';
                                break;
			case 'T':
				s[i] = '7';
                                break;
			case 'l':
				s[i] = '1';
                                break;
			case 'L':
                                s[i] = '1';
                                break;
			default:
				break;
		}
		i++;

	}

	return (s);
}

