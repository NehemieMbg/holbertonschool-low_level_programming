#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcpy - copies the string pointed by src
 * @src: is the source to be copied
 * @dest: is the copy of scr
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
