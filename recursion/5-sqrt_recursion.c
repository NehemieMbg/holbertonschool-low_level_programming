#include "main.h"
#include <string.h>

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: value to raise
 * Return: the result of the power
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_root(n, 0));
	}
}
/**
 *  _root - does the math
 * @i: value to raise
 * @n: the value to oparate
 * Return: the result
 */
int _root(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (_root(n, i + 1));
	}
}

