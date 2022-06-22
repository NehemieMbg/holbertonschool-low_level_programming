#include "main.h"
#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it
 * followed by a new line
 * @argc: number of argument
 * @argv: array of argument
 * Return: Always 0.
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

