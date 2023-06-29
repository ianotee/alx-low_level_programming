#include  "main.h"

/**
 * _strcmp - Compare two strings
 * @s1: string
 * @s2: string
 * Return: negative int if s1 < s2, 0 if matching, and positive int if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int n;

	for (n = 0; s1[n] != '\0' || s2[n] != '\0'; n++)
	{
		if (s1[n] != s2[n])
			return (s1[n] - s2[n]);
	}
	return (0);
}

