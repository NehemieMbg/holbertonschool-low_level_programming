#include "variadic_functions.h"

/**
 * print_numbers- prints numbers followed by new line
 * @separator: is a pointer that points to the string
 * @n: is the number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list string;

	va_start(string, n);


	for (i = 0; i < n ; i++)
	{
		printf("%d", va_arg(string, int));

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(string);

	putchar('\n');
}
