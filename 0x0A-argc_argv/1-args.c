#include <stdio.h>

/**
 *main - The main block of the program.
 *@argc: Counts the number of arguments.
 *@argv: array pointer od the argument
 *Return: always 0.
*/

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
