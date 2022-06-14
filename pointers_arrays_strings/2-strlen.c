#include "main.h"
#include <string.h>

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
