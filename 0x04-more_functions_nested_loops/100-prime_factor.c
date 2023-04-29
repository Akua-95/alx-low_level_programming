#include <stdio.h>
#include "main.h"
/**
 * main - prints the largest prime factor of the number 612852475143
 * Return: Always 0
 **/

int main(void)
{
	unsigned long int 1, n = 612852475143;

	for (i = 3; i < 782849; i = i + 2)
	{
		while ((n % i == 0) && (n != 1))
			n = n / i;
	}
	printf("%ld\n", n);
	return (0);
}
