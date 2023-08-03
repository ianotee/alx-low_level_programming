#include "main.h"

/**
 * get_endianness - The function checks.
 * Return: 0  if success.
 */

int get_endianness(void)
{
	int y;

	char *n;

	y = 1;

	n = (char *)&y;

	return (*n);
}
