#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * @...:  A variable
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	va_list ab;

	va_start(ab, n);

	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(ab, int));

		if (j != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
	va_end(ab);
}
