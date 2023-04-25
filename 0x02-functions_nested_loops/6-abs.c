#include "main.h"

/**
 * _abs - prints the absolute value of an integer.
 * @c: The number to be computed
 * Return: Absolute value of number
 */

int _abs(int c)
{
	if (c < 0)
	{
	int absvalue;

	absvalue = c * -1;
	return (absvalue);
	}
	return (c);
}
