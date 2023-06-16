#include <stdio.h>

/**
 *main - The main block.
 *Description - lowercase and uppercase will be printed.
 *
 *Return: 0
 */

int main(void)
{
	char c = 'a';
	char C = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}

	putchar('\n');
	return (0);
}
