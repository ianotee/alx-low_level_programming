#include "main.h"

/**
 *rev_string - Function that reverses a string.
 *@s: char Param.
 *Return: 0 if (success).
 */

void rev_string(char *s)
{
	char tm;

	int i, len, len1;

	len = 0;
	len1 = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	len1 = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		tm = s[i];
		s[i] = s[len1];
		s[len1--] = tm;
	}
}



