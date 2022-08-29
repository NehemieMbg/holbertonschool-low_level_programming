#include "search_algos.h"
#include <math.h>

/**
 * @brief 
 * 
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size), index = 0;
	size_t low = 0, high = 0;

	while (index < size)
	{
		if (array[index] >= value)
			break;
		else
			printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		index += jump;
	}
	low = index - jump;
	high = index; 
	index = low;

	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	while (index <= high && index < size)
	{
		printf("Value checked array [%lu] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
		
		index++;
	}
	return (-1);
}
