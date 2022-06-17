#include "main.h"
#include <string.h>

/**
 * _strcmp - Compares two strings
 * @s1: is the source to be commpared
 * @s2: is the source to be compated to
 * Return: the difference between the two stings (s1 & s2)
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
