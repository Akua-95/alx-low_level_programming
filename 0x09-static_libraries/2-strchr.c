#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: the string to search
 * @c: the string to locate
 * Return: a pointer to the first occurence if c is found
 * If c is not found - NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
