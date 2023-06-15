#include <stdio.h>

/**
 * main - The function will print the size of data types.
 *
 * Return: 0 if (Successful).
 */

int main(void)
{
	printf("The size of char: %d byte(s)\n", sizeof(char));
	printf("The size of int: %d byte(s)\n", sizeof(int));
	printf("The size of long int: %d byte(s)\n", sizeof(long));
	printf("The size of long long int: %d byte(s)\n", sizeof(double));
	printf("The  size of float: %d byte(s)\n", sizeof(float));

	return (0);
}
