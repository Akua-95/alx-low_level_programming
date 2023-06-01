#include "lists.h"
#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - fuction that prints a sentence before main
 * is executed
 * Return: Always 0.
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf(" bore my house upon my back!\n");
}
