#include <stdio.h>

/**
 *main - Program that prints alphabet in lowercase but skip
 * the letter 'q' and 'e'
 *Return: 0 if succeeded
 */
int main(void)
{
	/* local variable definition */
	char n = 'a';
	/* do loop execution */
	do {
		if (n == 'q')
		{
			/* skip the iteration */
			n++;
			continue;
		}
		else if (n == 'e')
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}while (n <= 'z');
	return (0);
}
