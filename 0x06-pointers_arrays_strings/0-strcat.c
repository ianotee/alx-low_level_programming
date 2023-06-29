#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: char string to concatenate to
 * @src: char string
 * Return: pointer to resulting string `dest`
 */

char *_strcat(char *dest, char *src)
{
	int n, m;

	for (n = 0; dest[n] != '\0'; n++)
		;
	for (m = 0; src[m] != '\0'; m++)
	{
		dest[n] = src[m];

		n++;
	}

	dest[n] = '\0';
	return (dest);
}
