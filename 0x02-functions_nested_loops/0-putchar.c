#include "main.h"

/**
 * main - This is the main Function.
 *
 * Return: 0 if(successful).
 */

int main(void)
{
	char my_Function[] = "_putchar";
	int i;

	while (my_Function[i] != '\0')
	{
		_putchar(my_Function[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
