#include "main.h"
#include <stdio.h>

/**
 * main -  program that multiplies two numbers.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if is true, 1 if false
 */

int main(int argc, char *argv[])
{
	int n1 = 0, n2 = 0;

	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		printf("%d\n", n1 * n2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
