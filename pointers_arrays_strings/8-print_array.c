#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_array - Prints elements of an array of intigers
 * @n: is the elements of an array
 * @a: is the array
 */
void print_array(int *a, int n)
{
	int e;

	e = 0;
	while (e < n)
	{
		if ((e == n - 1))
		printf("%d", a[e]);
		else
		printf("%d, ", a[e]);
		e++;
	}
	putchar('\n');
}

