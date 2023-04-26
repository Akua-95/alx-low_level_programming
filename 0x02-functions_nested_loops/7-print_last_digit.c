#include "main.h"

/**
 * prints_last_digit - prints the last digit of a number
 *
 * @a: The number to extract the last digit from
 *
 * Return: the value of the last digit of number
 */

int print_last_digit(int last_digit);
{
	int last_digit;

	last_digit = a %  10;
	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);

}
