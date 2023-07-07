#include <stdio.h>

/**
 *main - The main block.
 *@argc: counts the number of arguments.
 *@argv: Pointer to the arguments
 *Return: always 0
 */

int main(int argc, char *argv[])
{
	int arg;


	for (arg = 0; arg < argc; arg++)

	{
		printf("%d\n", argv[arg]);

		return (0);
	}
}


