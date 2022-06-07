#include <stdio.h>

/**
 *main - Program that prints alphabet in lowercase but skip
 * the letter 'q' and 'e'
 *Return: 0 if succeeded
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
