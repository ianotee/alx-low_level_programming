#include "main.h"

/**
 *_isupper - check for uppercase letters
 *@c: char param.
 *Return: if uppercase return 1 else return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
		return  (1);

	return (0);
}
