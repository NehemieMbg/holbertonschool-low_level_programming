#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - addition two numbers
 * @a: integer to opperate
 * @b: integer to opperate
 * Return: the final value
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub 
 * @a: integer to opperate
 * @b: integer to opperate
 * Return: the final value
 */

int op_sub(int a, int b)
{
	return (a - b);

}

/**
 * op_mul
 * @a: integer to opperate
 * @b: integer to opperate
 * Return: the final value
 */
int op_mul(int a, int b)
{
	return (a * b);

}

/**
 * op_div 
 * @a: integer to opperate
 * @b: integer to opperate
 * Return: the final value
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);

	printf("Error\n");
	exit(100);
}

/**
 * op_mod 
 * @a: integer to opperate
 * @b: integer to opperate
 * Return: the final value
 */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a %b);

	printf("Error\n");
	exit(100);
}
