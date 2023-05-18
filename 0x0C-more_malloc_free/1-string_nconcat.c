#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat -  function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 *
 * Return: If the function fails, it should return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int a = 0, b = 0, c = 0, d = 0;

	while (s1[c])
		c++;
	while (s2[d])
		d++;
	if (n < d)
		s = malloc(sizeof(char) * (c + n + 1));
	else
		s = malloc(sizeof(char) * (c + d + 1));
		return (NULL);
	while (a < c)
	{
		s[a] = s1[a];
		a++;
	}
	while (n < d && a < (c + n))
		s[a++] = s2[b++];
	while (n >= c && a < (c + d))
		s[a++] = s2[b++];
	s[a] = '\0';
	return (s);
}


