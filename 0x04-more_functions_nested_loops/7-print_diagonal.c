#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 * Description: Can only use _putchar to print
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, x;

		for (i = 0; i < n; i++)
		{
			for (x = 0 ; x < n; x++)
			{
				if (x == i)
				{
					_putchar('\\');
				}
				else if (n < i)
				{
					_putchar(' ');
                                                				}

			}
			_putchar('\n');
		}
	}
}
