#include <unistd.h>

/**
 * _putchar - This is a putchar function for printing characters.
 * @c: This is a character parameter.
 * Return:1 if (correct).
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
