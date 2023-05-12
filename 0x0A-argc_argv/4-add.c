#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers
 * @argc: number of command line arguments
 * @argv: array that contains the command line argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b, add = 0;

	for (a = 1; a < argc; a++)
	{
	int b;

		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
					printf("Error\n");
					return (1);
			}
		}
			add += atoi(argv[1]);
	}
	printf("%d\n", add);
	return (0);
}
