#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int byte, j;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	byte = atoi(argv[1]);

	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;

	for (j = 0; j < byte; j++)
	{
		if (j == byte - 1)
		{
		printf("%02hhx\n", arr[j]);
		break;
		}
		printf("%02hhx ", arr[j]);
	}
	return (0);
}
