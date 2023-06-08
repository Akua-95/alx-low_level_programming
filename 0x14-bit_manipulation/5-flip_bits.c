#include "main.h"

/**
 * flip_bits -  function that returns the number of bit
 * @n: first number
 * @m: second number
 *
 * Return: number to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		current = exclusive >> j;
		if (current & 1)
			count++;
	}
	return (count);
}
