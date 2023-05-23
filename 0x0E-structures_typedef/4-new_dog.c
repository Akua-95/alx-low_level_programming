#include <stdlib.h>
#include "dog.h"

/**
 * strlen - returns the length of a string
* @s: string
* Return: length of the string
*/

int _strlen(char *s)
{
	int len;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
 * *_strcpy - copies string pointed to by src
 * @dest: pointer to the buffer
 * @src: string
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int b, a;

	b = 0;

	while (src[b] != '\0')
	{
		b++;
	}

	for (a = 0; a < b; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}

/**
 * new_dog - function that creates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i, j;

	i = _strlen(name);
	j = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (i + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (j + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
		_strcpy(dog->name, name);
		_strcpy(dog->owner, owner);
		dog->age = age;

		return (dog);
}
