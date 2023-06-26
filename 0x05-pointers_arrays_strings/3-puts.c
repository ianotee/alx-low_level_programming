#include "main.h"

/**
 * _puts - The function that prints a string.
 *@str: Char param.
 *
 * Return : 0 if (successful).
 */

void _puts(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);

		i++;
	}

	_putchar('\n');
}
