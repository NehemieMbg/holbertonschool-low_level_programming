#include <stdio.h>

/**
 *main - Program that prints all the number of base 16
 *Return: 0 if succeeded
 */
int main(void)
{
	int n;
	char c;
	/* prints number from 1-9 */
	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	/* prints letters from a-f */
		for (c = 97; c <= 102; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
