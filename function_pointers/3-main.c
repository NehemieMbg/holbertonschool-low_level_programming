#include "3-calc.h"

int main(int argc, char *argv[])
{
	int result = 0;

	if(argc == 4)
	{
		result = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	}
	else
	{
		printf("Error\n");
		exit(98);
	}

	printf("%d\n", result);
	return (0);
}

