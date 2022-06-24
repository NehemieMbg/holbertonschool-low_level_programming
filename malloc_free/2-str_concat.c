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
 * str_concat - concatenates two strings
 * @s1: is the string s1 + s2
 * @s2: is the string s2 to concatenates to s1
 *
 *
 * Return: newly allocated space in memory which contains
 * the contents s1 & s2
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *dest;

	if (s1 == NULL)
		s1 = "";

	dest = malloc(sizeof(char) * ((_strlen(s1) + _strlen(s2) + 1)));
	if (dest == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		dest[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
		dest[i + j] = s2[j];

	dest[i + j] = '\0';
	return (dest);
}
