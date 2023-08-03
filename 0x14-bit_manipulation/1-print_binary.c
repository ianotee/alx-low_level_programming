#include "main.h"

/**
 *power - computes the values.
 * @base: base of the exponent
 * @pow: power of the exponent
 *
 * Return: value of (base ^ power)
 */
unsigned long int power(unsigned int base, unsigned int pow)
{
	unsigned long int my_Number;
	unsigned int m;

	my_Number = 1;
	for (m = 1; m <= pow; m++)
		my_Num *= base;
	return (my_Num);
}

/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 * Return: 0.
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char flag;

	flag = 0;
	divisor = power(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}
