#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string
 * @str: The string to count
 *
 * Return: The number of words in the string
 */
int count_words(char *str)
{
	int i, count = 0;

	i = 0;

	for (; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
	}
	return (count);
}

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: Pointer to the array of words
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, m, words_count, len;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	words_count = count_words(str);
	if (words_count == 0)
		return (NULL);

	words = malloc((words_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			len = 0;

			for (; str[i + len] != ' ' && str[i + len] != '\0'; len++)
			;

			words[j] = malloc((len + 1) * sizeof(char));
			if (words[j] == NULL)
			{
				k = 0;
				for (; k < j; k++)
					free(words[k]);
				free(words);
				return (NULL);
			}
			for (m = 0; m < len; m++)
				words[j][m] = str[i + m];
			words[j][m] = '\0';
			j++;
		}
	}
	words[j] = NULL;
	return (words);
}

