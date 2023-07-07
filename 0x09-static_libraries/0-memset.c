#include  "main.h"

/**
 *_memset - Fills a block of memory.
 *@s: address of memory
*@b: int param
*@n: intv param
*Return: with  new values.
*/

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;

		n--;
	}

	return (s);
}
