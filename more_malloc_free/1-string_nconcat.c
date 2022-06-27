#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Prints the lenght of a string
 * @s: is the value to avaluate
 * Return: the value of the string lenght
 */
unsigned int _strlen(char *s)
{
	unsigned int n;

	n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}

/**
 * string_nconcat - concatenates two strings.
 * @s1: is the string s1 + s2
 * @s2: is the string s2 to concatenates to s1
 * @n:number of byte from s2 to s1
 *
 * Return: NULL if it fails and otherwise return a pointer
 * a new allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *dest;
	unsigned int i, j;

	dest = malloc(sizeof(char) * ((_strlen(s1) + _strlen(s2) + 1)));
	if (dest == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		dest[i] = s1[i];

	for (j = 0; j < n && s2[j] != '\0'; j++)
		dest[i + j] = s2[j];

	dest[i + j] = '\0';
	return (dest);
}
