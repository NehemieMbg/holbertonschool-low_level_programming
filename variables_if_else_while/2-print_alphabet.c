#include <stdio.h>

/**
 *main - Program that prints alphabet in lowercase
 *Return: 0 if succeeded
 */
int main(void)
{
	char n;
		for (n = 'a'; n <= 'z'; n++)
	{
			putchar(n);
	}
	putchar('\n');
	return (0);
}
