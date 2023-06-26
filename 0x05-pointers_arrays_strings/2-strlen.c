#include "main.h"


/**
 *_strlen - Prints the length of a string.
 *@s: Type char.
 *Return:0 if (successful).
 */

int _strlen(char *s)
{
	int n;

	n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	return (n);



}
