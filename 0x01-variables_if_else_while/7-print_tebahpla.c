#include <stdio.h>

/**
 * main - The  main block.
 * Description -  will print the the alphabet in reverse order in lowercase.
 *
 * Return: 0
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
