#include <stdio.h>

/**
 *main - The main block.
 *@argc: Counts the arguments
 *@argv: Points to the array.
 *Return: always 0
 */

int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
