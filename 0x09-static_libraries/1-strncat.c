#include "main.h"

/**
 * _strncat - function that concatenates two strings using atmost
 * @dest: the string to be copied to
 * @src: the string to be copied to dest
 * @n: number of bytes from src  to be concatenates to dest
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i++])
		j++;
	for (i = 0; src[i] && i < n; i++)
		dest[j++] = src[i];
	return (dest);
}
