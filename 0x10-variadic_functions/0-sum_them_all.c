#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of parameters
 * @...: the variable
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int j, sum = 0;

	va_list ab;

	va_start(ab, n);

	for (j = 0; j < n; j++)
		sum += va_arg(ab, int);
	va_end(ab);
	return (sum);
}
