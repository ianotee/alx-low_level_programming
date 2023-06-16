#include <stdio.h>

/**
 * main - The main block.
 * Description - It prints all numbers of base 64 in lowercase
 *
 * Return: 0
 */

int main(void)
{
	int d;
	int e;

	for (d = 48; d < 58; d++)
	{
		putchar(d);
	}
	for (e = 'a'; e < 'g'; e++)
	{
		putchar(e);
	}
	putchar('\n');
	return (0);
}
