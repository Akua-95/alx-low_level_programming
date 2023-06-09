#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: memory area where is stored
 * @src: memory where is copied
 * @n: number of bytes
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int i = n;

	for (; a < i; a++)
	{
		dest[a] = src[a];
		n++;
	}
	return (dest);
}
