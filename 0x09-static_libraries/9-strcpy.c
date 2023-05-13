#include "main.h"

/**
 * _strcpy - copy a string
 * @dest: char type string
 * @src: source value
 * Description: copy the string pointed to by 'src' to
 * the buffer pointed to by dest.
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int z = -1;

	do {
		z++;
		dest[z] = src[z];
	} while (src[z] != '\0');
	return (dest);
}
