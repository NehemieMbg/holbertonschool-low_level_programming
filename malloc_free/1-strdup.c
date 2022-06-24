#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Prints the lenght of a string
 * @s: is the value to avaluate
 * Return: the value of the string lenght
 */
int _strlen(char *s)
{
	int n;

	n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}

/**
 * _strdup - returns a pointer to a newly
 * allocated space in memory,
 * which contains a copy of the
 * string given as a parameter
 * @str: Memory to copy
 *
 * Return: a pointer to a newly allocated space
 */
char *_strdup(char *str)
{
	int i;
	char *new;

	if (str == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(char) * (_strlen(str) + 1));
	if (new == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		new[i] = str[i];
	}
	return (new);
	free(new);
}
