#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to be checked
 * Return: 0
 */

int _strlen(char *s)
{
	int string_length = 0;

	for (; *s++;)
		string_length++;
	return (string_length);
}
