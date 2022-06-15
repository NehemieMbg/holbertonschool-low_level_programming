#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - Reverse a string
 * @s: is the pinter that point to the string
 */

void rev_string(char *s)
{
	int temp, left, right;

	left = 0;
	right = _strlen(s) - 1;

	while (left < right)
	{
		temp = s[left];
		s[left] = s[right];
		s[right] = temp;

		left++;
		right--;
	}
}
/**
 * _strlen - Prints the lenght of a string
 * @s: is the value to avaluate
 * Return: the value of the string lenght
 */
int _strlen(char *s)
{
	int n;

	n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}
