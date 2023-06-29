#include "main.h"

/**
 *string_toupper - Changes all lowercase to uppercase.
 *@c: the char param.
 *Return: 0.
 */

char *string_toupper(char *c)
{
	int n;

	for (n = 0; c[n] != '\0'; n++)
	{
		if (c[n] > 96 && c[n] < 123)
		{
			c[n] -= 32;
		}

	}
	return (c);
}


