#include <stdio.h>
/**
 * main - prints the number from 1 to 100
 * followed by a new line
 * Return: 0 if succeded
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 15 == 0)
			printf("FizzBuzz ");
		else if (n % 3 == 0)
			printf("Fizz ");
		else if (n % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", n);
	}
	putchar('\n');
	return (0);
}
