#include <stdio.h>

/**
 * main - main block
 * Description: Print all possible combinations fo single-digit numbers.
 * You can only use `putchar` to print to console
 *
 * Return: 0
 */

int main(void)
{
	int y;

	for (y = 48; y < 58; y++)
	{
		putchar(y);
		if (y < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
