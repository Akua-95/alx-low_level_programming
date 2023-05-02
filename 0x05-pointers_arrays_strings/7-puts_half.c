#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string to print
 * Return: void
 */

void puts_half(char *str)
{
	int a = 0;
	int k;

	while (str[a] != '\0')
	{
	a++;
	}
	if (a % 2 == 1)
	{
	k = (a - 1) / 2;
	k += 1;
	}
	else
	{
		k = a / 2;
	}

	for (; k < a; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
