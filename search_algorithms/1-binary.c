#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a
 * sorted array of integers using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * @right: is the end of the array or the new end
 * which start at the previous middle
 * @left: is the beginning of the array or the new beginning
 * which start at the previous middle
 */
void print(int *array, size_t left, size_t right)
{
	size_t index;

	printf("Searching in array:");
	for (index = left; index < right; index++)
		printf(" %d,", array[index]);
	printf(" %d\n", array[index]);
}

int binarySearch(int *array, int value, size_t left, size_t right)
{
	int mid;


	if (left > right) return (-1);

	print(array, left, right);
	mid = (left + right) / 2;

	if (array[mid] == value)
		return (mid);
	else if (array[mid] > value)
		return binarySearch(array, value, left, mid - 1);
	else
		return binarySearch(array, value, mid + 1, right);
}

int binary_search(int *array, size_t size, int value)
{
	if (!array || !size)
		return (-1);

	return binarySearch(array, value, 0, size - 1);
}
