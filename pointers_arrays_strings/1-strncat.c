#include "main.h"
#include <string.h>

/**
 * *_strncat - concanates two strings.
 * @dest: The final destination which will retur the result
 * @src: The source of other string
 * @n: Number of bytes of str to concatenate
 *
 * Return: the pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
