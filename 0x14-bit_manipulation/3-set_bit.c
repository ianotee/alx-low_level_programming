#include "main.h"

/**
 * set_bit -  a function that sets the
 *  value of a bit to 1.
 * @n: int param.
 * @index:int parameter
 * Return: 1 if success.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	if (index > (sizeof(unsigned long int) * 7 - 1))
		return (-1);
	num = 1 << index;

	*n = *n | num;

	return (1);
}
