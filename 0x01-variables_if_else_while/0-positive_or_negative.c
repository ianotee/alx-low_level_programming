#include  <stdio.h>
#include  <stdlib.h>
#include <time.h>

/**
 * main - The main block.
 *Description - The program generates positive and negative numbers.
 *
 * Return: 0 if (Successful).
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);
	return (0);


}
