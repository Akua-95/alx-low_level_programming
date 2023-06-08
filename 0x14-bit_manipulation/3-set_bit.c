#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at given index
 * @n: the number to change
 * @index: index from 0 of the bit
 *
 * Return: 1 if it worked, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
