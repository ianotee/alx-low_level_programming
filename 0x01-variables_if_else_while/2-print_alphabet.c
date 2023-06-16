#include <stdio.h>

/**
 * main - The main function.
 * Description - The putchar function to print alphabet in lowercase.
 *
 * Return: 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}


