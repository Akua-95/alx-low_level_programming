#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define ERR_MSG "Error"


/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, otherwise 1
 */
int is_digit(char *s)
{
	int a = 0;

	while (s[a])
	{
		if (s[a] < '0' || s[a] > '9')
			return (0);
		a++;
	}
	return (1);
}

/**
 * _strlen - the length of a string
 * @s: string to evaluate
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

/**
 * errors - errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int e, b, c, a, d, digit1, digit2, *f, g = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	e = _strlen(s1);
	b = _strlen(s2);
	c = e + b + 1;
	f = malloc(sizeof(int) * c);
	if (!f)
		return (1);
	for (a = 0; a <= e + b; a++)
		f[a] = 0;
	for (b = b - 1; b >= 0; b--)
	{
		digit1 = s1[e] - '0';
		d = 0;
		for (b = _strlen(s2) - 1; b >= 0; b--)
		{
			digit2 = s2[b] - '0';
			d += f[e + b + 1] + (digit1 * digit2);
			f[e + b + 1] = d % 10;
			d /= 10;
		}
		if (d > 0)
			f[e + b + 1] += d;
	}
	for (a = 0; a < c - 1; a++)
	{
		if (f[a])
			g = 1;
		if (g)
			_putchar(f[a] + '0');
	}
	if (!g)
		_putchar('0');
	_putchar('\n');
	free(f);
	return (0);
}
