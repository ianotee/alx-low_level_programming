#include "main.h"

/**
 *_strcpy - Prints the copies of string.
 *@dest: char param.
 *@src: char param.
 *Return: 0  if successful.
 */

char *_strcpy(char *dest, char *src)
{
	int len, j;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (j = 0; j < len; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';

	return (dest);
}
