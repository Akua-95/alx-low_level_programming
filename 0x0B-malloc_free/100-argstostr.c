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
	while (b < ac)
	{
		while (av[b][c])
		{
			a++;
			c++;
		}
		c = 0;
		b++;
	}

	str = malloc((sizeof(char) * a) + ac + 1);
	b = 0;
	while (av[b])
	{
		while (av[b][c])
		{
			str[d] = av[b][c];
			d++;
			c++;
		}
		str[d] = '\n';
		c = 0;
		d++;
		b++;
	}
	d++;
	str[d] = '\0';
	return (str);
}
