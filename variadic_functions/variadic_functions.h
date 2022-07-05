#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct list_s - is the list of strings
 *@c: is a chain of character
 *@f: is the pointer to a function
 */
typedef struct list_s
{
	char c;
	void (*f)(va_list);
} list_t;

#endif
