#include "main.h"

/**
 * swap_int - The function that swaps integers.
 * @a: Int param.
 * @b: Int param.
 * Return: 0 if (Successful).
 */

void swap_int(int *a, int *b)
{
	int var;

	var = *a;
	*a = *b;
	*b = var;
}
