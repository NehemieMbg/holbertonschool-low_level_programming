#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Function that point to a function given by an argument
 * @f: is the pointed function
 * @name: is the string to print
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
