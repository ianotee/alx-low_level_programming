#include"main.h"

/**
 * get_bit - a function that returns th
 * e value of a bit at a given inde
 *@n: int data type.
 * @index: int data param.
 * Return: 0.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int moon, none;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	moon = 1 << index;
	none = n & moon;
	if (none == moon)
		return (1);

	return (0);
}


