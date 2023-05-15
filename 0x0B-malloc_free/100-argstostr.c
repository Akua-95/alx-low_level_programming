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
	int a;
	int b;
	int c;
	int d;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		d++;
	}
	s = malloc(sizeof(char) * (d + 1));
	if (s == NULL)
		return (NULL);
	c = 0;

	for (a = 0; a < ac; a++)
	{
		for (a = 0; av[a][b] != '\0'; b++)
		{
		s[c] = av[a][b];
		c++;
		}
		c++;
		s[c] = '\n';
	}
	return (s);
}
