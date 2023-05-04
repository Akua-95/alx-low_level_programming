#include "main.h"

/**
 * _strncpy - function that copies a string
 * of bytes from string src to dest
 * @dest: the string to be copied
 * @src: The source string
 * @n: number of bytes to copied from src
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, src_j = 0;

	while (src[i++])
		src_j++;
	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = src_j; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
