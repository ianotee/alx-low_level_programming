#include <stdio.h>

/**
 * main - The function will print the size of data types.
 *
 * Return: 0 if (Successful).
 */

int main(void)
{
	printf("size of char: %d byte(s)\n", sizeof(char));
	printf("size of int: %d byte(s)\n", sizeof(int));
	printf("size of long int: %d byte(s)\n", sizeof(long int));
	printf("size of long long int: %d byte(s)\n", sizeof(long long int));
	printf("size of float: %d byte(s)\n", sizeof(float));

	return (0);
}
