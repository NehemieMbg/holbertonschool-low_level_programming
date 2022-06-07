#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
	int n;

	srand(time (NULL);
	n = rand() -RAND_MAX /2;

	        //Prints "n is positive" if
        //n is greater than 0
        if (n > 0)
        printf("%d is positive\n", n);

        //Prints "n is zero" if
        //n equal to 0
        else if (n ==0)
        printf("%d is zero\n", n);

        //Prints "n is negative" if
        //n is les than 0
        else if (n < 0)
        printf("%d is negative\n", n);

        return (0);
}
