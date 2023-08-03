#include "main.h"

/**
 *binary_to_uint - a function that converts
 * a binary number to an unsigned int
 *@b: char data type.
 *Return: 0 if (successful)
 */

unsigned int binary_to_uint(const char *b)
{
	int w;
	unsigned int my_Num;

	my_Num = 0;
	if (!b)
		return (0);
	for (w = 0; b[w] != '\0'; w++)
	{
		if (b[w] != '0' && b[w] != '1')
			return (0);
	}
	for (w = 0; b[w] != '\0'; w++)
	{
		my_Num <<= 1;
		if (b[w] == '1')
			my_Num += 1;
	}
	return (my_Num);
}
