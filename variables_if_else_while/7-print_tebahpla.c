#include <stdio.h>

/**
 *main - Program that prints alphabet in lowercase but skip
 * the letter 'q' and 'e'
 *Return: 0 if succeeded
 */
int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
