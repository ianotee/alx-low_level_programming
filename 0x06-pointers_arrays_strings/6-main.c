#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	char str[] = "Expect the best. Prepare for the worst. Capitalize on\0",
	char str[] = "what comes.\nhello world! hello-w\0",
	char str[] = "orld 0123456hello world\thello world.hello world\n\0";

	ptr = cap_string(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
}
