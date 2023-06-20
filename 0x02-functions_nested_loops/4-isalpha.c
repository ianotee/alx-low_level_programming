#include "main.h"

/**
 * _isalpha - check if character is an alpha character.
 * @c: character type.
 * Return: 1 if letter, lowercase or uppercase and 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
