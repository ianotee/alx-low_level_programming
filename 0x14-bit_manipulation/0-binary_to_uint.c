
#include "main.h"

/**
 *binary_to_uint - change binary to unsigned int.
 *@b: char type.
 *Return: 0 if success.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int m, y;

	y = 0;
	m = 0;
	if (!b)
		return (0);

	while (b[m] != '\0')
	{
		if (b[m] != '0' && b[m] != '1')
			return (0);
		y <<= 1;
		if (b[m] & 1)
			y += 1;
		m += 1;
	}
	return (y);
}
