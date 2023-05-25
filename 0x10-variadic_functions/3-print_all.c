#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	char *s, *sep = "";
	int j;

	va_list ab;

	va_start(ab, format);

	if (format)
	{
		while (format[j])
		{
			switch (format[j])
			{
				case 'c':
					printf("%s%c", sep, va_arg(ab, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(ab, double));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(ab, int));
					break;
				case 's':
					s = va_arg(ab, char *);
					if (!s)
					s = "(nill)";
					printf("%s%s", sep, s);
					break;
				default:
					j++;
					continue;
			}

			sep = ", ";
			j++;
		}
	}
	printf("\n");
	va_end(ab);
}
