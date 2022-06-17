#include "main.h"
#include <string.h>

/**
 * *_strncpy - sopies a string pointed by the src
 * @dest: The final destination which will retur the result
 * @src: The source of other string
 * @n: is the limite of the string
 *
 * Return: the destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		i++;
		dest[i] = '\0';
	}
	return (dest);
}
