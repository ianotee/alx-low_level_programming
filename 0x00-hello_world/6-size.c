#include <stdio.h>

/**
 * main - The function will print the size of data types.
 *
 * Return: 0 if (Successful).
 */

int main(void)
{
	printf("size of char: %lu byte(s)\n", sizeof(char));
	printf("size of int: %lu byte(s)\n", sizeof(int));
	printf("size of long int: %lu byte(s)\n", sizeof(long));
	printf("size of long long int: %lu byte(s)\n", sizeof(long long));
	printf("size of a double: %lu byte(s)\n", sizeof(double));
	printf("size of float: %lu byte(s)\n", sizeof(float));

	return (0);
}
