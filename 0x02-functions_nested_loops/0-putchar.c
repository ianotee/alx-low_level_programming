#include "main.h"

/**
 * main - The Function.
 *
 * Return: 0 if(successful).
 */
int main(void)
{
	char myFunction[] = "_putchar";
	int i;

	while (myFunction[i] != '\0')
	{
		_putchar(myFunction[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
