#include "main.h"

/**
 * get_bit - funcntion that returns the value
 * of a bit at at a given index.
 * @n: number
 * @index: index from 0 of the bit
 *
 * Return: value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (index > 63)
		return (-1);

	val = (n >> index) & 1;

	return (val);
}
