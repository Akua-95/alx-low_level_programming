#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicate of the string
 * @str: string to duplicate
 * Return: returns a pointer to the duplicated string
 *
 * It returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *s;
	int j = 0, k = 1;

	if (str == NULL)
		return (NULL);

	k = 1;
	while (str[k])
	k++;
	s = malloc((sizeof(char) * k) + 1);

	if (s == NULL)
		return (NULL);

	while (j < k)
	{
		s[j] = str[j];
		j++;
	}
	s[j] = '\0';
	return (s);
}
