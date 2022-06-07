#include <stdio.h>

/**
 *main - Program that prints alphabet in lowercase & uppercase
 *Return: 0 if succeeded
 */
int main(void)
{
	char n;
	char u;
		for (n = 'a'; n <= 'z'; n++)
	{
			putchar(n);
	}
		for (u = 'A'; u <= 'Z'; u++)
	{
			putchar(u);
	}
	putchar('\n');
	return (0);
}
