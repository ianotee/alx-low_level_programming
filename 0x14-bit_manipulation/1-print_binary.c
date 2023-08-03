#include "main.h"

/**
 * print_binary - binary of numbers.
 * @n: int param.
 * Return : 0
 */
void print_binary(unsigned long int n)
{
	int m, round = 0;
	unsigned long int moon;

	for (m = 63; m >= 0; m--)
	{
		moon = n >> m;

		if (moon & 1)
		{
			_putchar('1');
			round++;
		}
		else if (round)
			_putchar('0');
	}
	if (!round)
		_putchar('0');
}
