#include <stdio.h>

/**
 *main - Program that prints alphabet in lowercase but skip
 * the letter 'q' and 'e'
 *Return: 0 if succeeded
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
