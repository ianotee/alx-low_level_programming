#include "main.h"

/**
 * flip_bits - a function that returns the number of bits.
 * @n:int parameter.
 * @m:int data type.
 * Return: 0 if success
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int w, round = 0;

	unsigned long int moon;
	unsigned long int more = n ^ m;

	for (w = 64; w >= 0; w--)
	{
		moon = more >> w;

		if (moon & 1)
			round++;
	}

	return (round);

}
