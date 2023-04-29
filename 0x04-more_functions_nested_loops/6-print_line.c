#include "main.h"

/**
 * print_line - straight line
 * @n: Number of times
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (i = 0; i < n; i++)
	{
		_putchar('-');
	}
	_putchar('\n');
	}
}
