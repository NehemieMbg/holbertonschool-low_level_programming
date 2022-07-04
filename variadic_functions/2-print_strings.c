#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by new line
 * @separator: is a pointer that points to the string
 * @n: is the number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list string;

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		if (string != NULL)
		{
			char *str = va_arg(string, char *);

			printf("%s", str);

			if (separator != NULL && i < n - 1)
				printf("%s", separator);

			else
				printf("(nil)");
		}
	}
	va_end(string);
	putchar('\n');
}
