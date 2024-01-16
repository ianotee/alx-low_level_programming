#include "search_algos.h"
#include <math.h>


size_t min(size_t a, size_t b);

/**
 * min - returns the minimum size.
 * @a: first digit.
 * @b: second digit.
 * Return: `a` if lower or equal to `b`, `b` otherwise
 */
size_t min(size_t a, size_t b)
{
	return (a <= b ? a : b);
}

/**
 * jump_search - searches for a sorted value.
 * @array: pointer to first array.
 * @size: number elements.
 * @value: value to search.
 * Return: first index containing `value.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t low, high, jump;

	if (!array || size == 0)
		return (-1);

	jump = sqrt(size);

	for (high = 0; high < size && array[high] < value;
	     low = high, high += jump)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       high, array[high]);
	}


	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	for (; low <= min(high, size - 1); low++)
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		if (array[low] == value)
			return (low);
	}

	return (-1);
}
