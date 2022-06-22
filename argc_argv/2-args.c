#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives followed by a new line
 * followed by a new line
 * @argc: number of argument
 * @argv: array of argument
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
