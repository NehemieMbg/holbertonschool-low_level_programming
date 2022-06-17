#include "main.h"
#include <string.h>

/**
 * *_strcat - concanates two strings.
 * @dest: The final destination which will retur the result
 * @src: The source of other string
 *
 * Return: the pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
