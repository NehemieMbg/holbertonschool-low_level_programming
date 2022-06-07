#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* assign a random number to the varable n each time it's executed */
/* Reteurn: 0 if succeeded */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ( n > 5 )
		printf("Last digit of %d and is greater than 5\n", n);
	else if ( n == 0 )
		printf("Last digit of %d and is 0\n", n);
	else if ( n < 6 )
		printf("Last digit of %d and is less than 6 and not 0\n", n);

	return (0);
}
