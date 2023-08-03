#include <unistd.h>

/**
 * _putchar - This function prints characters.
 * @c: char data type.
 * Return: 1 if success.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
