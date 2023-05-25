#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * @...: variable
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int j;

	va_list ab;

	va_start(ab, n);

	for (j = 0; j < n; j++)
	{
		str = va_arg(ab, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && j != n - 1)

			printf("%s", separator);
	}
	printf("\n");
	va_end(ab);
}