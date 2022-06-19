#include <unistd.h>
#include "main.h"
/**
 * *_memcpy - copies memory area
 * @dest: destination of the memory area
 * @src: memory area to copy from
 * @n: number of bytes to copy b
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
