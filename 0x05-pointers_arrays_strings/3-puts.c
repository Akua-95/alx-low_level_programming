#include "main.h"

/**
 * _puts - function that print a string to stdout
 * @str: the string
 * Return: string and new line
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
