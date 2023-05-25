#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator - string to be printed between numbers
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
		if (!separator)
		printf("%d", va_arg(ab, int));

		else if
			(separator && j == 0);
		printf("%d", va_arg(ab, int));
		else
			printf("%s%d", separator, va_arg(ab, int);
	}
	printf("\n");
	va_end(ab);
}
