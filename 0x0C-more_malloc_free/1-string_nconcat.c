#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat -  function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: If the function fails, it should return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int a = 0, b = 0, c = 0, d = 0;

	while (s2 && s2[d])
		d++;
	while (s1 && s1[c])
		c++;
	if (n < d)
		s = malloc(sizeof(char) * (c + n + 1));
	else
		s = malloc(sizeof(char) * (c + d + 1));
	if (!s)
		return (NULL);
	while (a < c)
	{
		s[a] = s1[a];
		a++;
	}
	while (n < d && a < (c + n))
		s[a++] = s2[b++];
	while (n >= d && a < (c + d))
		s[a++] = s2[b++];
	s[a] = '\0';
	return (s);
}
