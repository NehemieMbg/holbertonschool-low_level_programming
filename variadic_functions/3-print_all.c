#include "variadic_functions.h"

/**
 * _print_c - Prints characters
 * @lst: is the list
 */

void _print_c(va_list lst)
{
	printf("%c", va_arg(lst, int));
}
/**
 * _print_i - Prints integers
 * @lst: is the list
 */
void _print_i(va_list lst)
{
	printf("%d", va_arg(lst, int));
}
/**
 * _print_f - Prints floats
 * @lst: is the list
 */
void _print_f(va_list lst)
{
	printf("%f", va_arg(lst, double));
}
/**
 * _print_s - Prints characters
 * @lst: is the list
 */
void _print_s(va_list lst)
{
	char *i = va_arg(lst, char*);

	if (i)
		printf("%s", i);

	else
		printf("(nil)");
}

/**
 * print_all - Function that prints everything
 * @char: is the pointer that poin to the string to print
 * @format: is the last fuction used
 */
void print_all(const char * const format, ...)
{
	list_t prt[] = {
		{'c', _print_c},
		{'i', _print_i},
		{'f', _print_f},
		{'s', _print_s},
		{'\0', NULL},
	};

	int i = 0;
	int j;
	char *sep = "";
	va_list lst;

	va_start(lst, format);

	while (format[i])
	{
		j = 0;
		while (prt[j].c)
		{
			if (prt[j].c == format[i])
			{
				printf("%s", sep);
				sep = ", ";
				prt[j].f(lst);
			}
			j++;
		}
		i++;
	}
	va_end(lst);
	putchar('\n');
}
