#include "main.h"

/**
 * prints_last_digit - prints the last digit of a number
 * @n: The number to compute last digit
 * Return: the value of the last digit
 */

int last(int n)

{
	int last;

	last = n % 10;
	if (last < 0)
	{
	last = last * -1
	}
	_putchar(last + '0');
	return (last);
}
