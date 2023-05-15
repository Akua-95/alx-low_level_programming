#include "main.h"
#include <stdlib.h>

/**
 * word_len - function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int word_len(char *s)
{
	int i, j, w;

	i = 0;
	w = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] == ' ')
			i = 0;
		else if (i == 0)
		{
			i = 1;
			w++;
		}
	}

	return (w);
}
/**
 * **strtow - function that splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings
 * or NULL (fail)
 */

char **strtow(char *str)
{
	char **strtow, *z;

	int a, b = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = word_len(str);
	if (words == 0)
		return (NULL);

	strtow = (char **) malloc(sizeof(char *) * (words + 1));
	if (strtow == NULL)
		return (NULL);

	for (a = 0; a <= len; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (c)
			{
				end = a;
				z = (char *) malloc(sizeof(char) * (c + 1));
				if (z == NULL)
					return (NULL);

				while (start < end)
				*z++ = str[start++];
				*z = '\0';
				strtow[b] = z - c;
				b++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = a;
	}

	strtow[b] = NULL;

	return (strtow);
}
