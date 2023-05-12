#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints program that multiplies two numbers.
 * @argc: number of arguments
 * @argv: array of arguments vector
 *
 * Return: If program does not receive two arguments, your program
 * should print Error, followed by a new line, and return 1
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
