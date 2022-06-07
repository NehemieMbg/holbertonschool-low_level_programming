#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - assign random number to the variables n each time it's expetcted
 *
 Return: Always 0 if succeeded
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
			return (0);
}
