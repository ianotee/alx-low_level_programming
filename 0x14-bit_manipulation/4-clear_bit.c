#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - This function seta value to zero.
 * @n:interger param.
 * @index: inter param.
 * Return: 1 if success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 10)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
