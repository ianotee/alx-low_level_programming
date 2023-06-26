#include "main.h"

/**
 *_atoi - This function that convert a string to an integer
 *@s:char pararm.
 *Return: 0 if successful.
 */

int _atoi(char *s)
{

	int sign = 1;

	 int num = 0;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * sign);
}

