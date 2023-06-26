#include "main.h"

/**
 *print_rev - Function that printss in reverse.
 *
 *@s: Params.
 *Return: 0 if (Successful).
 */

void print_rev(char *s)
{

	int i, n, len;

	while (s[i] != '\0')
	{
		i++;
	}

	len = i;

	for (n =  len - 1; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}

