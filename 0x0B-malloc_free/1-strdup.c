#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicate of the string
 * @str: string to duplicate
 * Return: returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *_strdup;
	int j = 0, k = 1;

	if (str == NULL)
		return (NULL);

	k = 1;
	while (str[k])
	k++;
	str = malloc(sizeof(char) * (k + 1));

	if (str == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
	str[j] = str[j];
	return (str);
}
