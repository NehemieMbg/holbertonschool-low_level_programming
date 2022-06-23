#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: number of argument
 * @argv: array of argument
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, j, result;

	result = 0;

	if (argc < 1)
	{
		printf("0\n");
	}
	else
	{
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
	}
		printf("%d\n", result);
	}
	return (0);
}
