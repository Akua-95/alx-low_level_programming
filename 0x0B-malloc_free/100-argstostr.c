#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of program
 * @ac: number of arguments
 * @av: array of arguments
 * Return: a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int a = 0, b = 0, c = 0, d = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)

	{
		for (b = 0; av[a][b] != '\0'; b++)
			d++;
	}

	d += ac;

	str = malloc(sizeof(char) * d + 1);

	if (str == NULL)

		return (NULL);

	for (a = 0; a < ac; a++)

	{
		for (b = 0; av[a][b]; b++)

	{
		str[c] = av[a][b];
		c++;
	}
	if (str[c] == '\0')
	{
		str[c] = '\n';
	}
	}
	return (str);
}
