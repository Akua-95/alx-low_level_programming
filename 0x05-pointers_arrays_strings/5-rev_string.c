#include "main.h"

/**
 * rev_string - function that reverse a string
 * @s: pointer pointing to the string
 * Return: 0
 */

void rev_string(char *s)
{
	int length, z, half;
	char tmp;

	for (length = 0; s[length] != '\0'; length++)
	;
	z = 0;
	half = length / 2;

	while (half++)
	{
		tmp = s[length - z - 1];
		s[length - z - 1] = s[z];
		s[z] = tmp;
		z++;
	}
}
