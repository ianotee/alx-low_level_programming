#include "search_algos.h"

int binary_search_recursion(int *array, int value,
			    size_t low, size_t high);

/**
 * binary_search_recursion - helper to `advanced_binary`.
 * @array: pointer to first element of array.
 * @value:  search 
 * @low:  index in array
 * @high:  index in array
 * Return: index containing `value`.
 */
int binary_search_recursion(int *array, int value,
			    size_t low, size_t high)
{
	size_t mid, i;

	if (!array)
		return (-1);

	mid = (low + high) / 2;
	printf("Searching in array: ");
	for (i = low; i <= high; i++)
		printf("%i%s", array[i], i == high ? "\n" : ", ");

	if (array[low] == value)
		return ((int)low);

	if (array[low] != array[high])
	{
		if (array[mid] < value)
			return (binary_search_recursion(array, value,
							mid + 1, high));
		if (array[mid] >= value)
			return (binary_search_recursion(array, value,
							low, mid));
	}

	return (-1);
}

/**
 * advanced_binary - searches for a value of array.
 * @array: pointer to first array.
 * @size: number arrays.
 * @value: search.
 * Return: first index containing `value.
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;

	if (!array)
		return (-1);

	return (binary_search_recursion(array, value, low, high));
}0
