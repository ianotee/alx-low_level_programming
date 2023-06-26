#include "main.h"

/**
 * print_rev - The function that prints in reverse.
 *@s: char param.
 *Return: 0 if (sucessful).
 */

void print_rev(char *s)
{
	int i, n, len;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	len = i;

	for (n = len - 1; n >= 0; n--)
	{
		_putchar(s[n]);
	}

	_putchar('\n');
}

