#include "main.h"
#include <stdio.h>

/**
 * main - Prints the name of a program
 * followed by a new line
 * @argc: number of argument
 * @argv: array of argument
 * Return: Always 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
