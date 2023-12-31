#include "main.h"

/**
 *factorial - function that returns the factorial of a given number
 *@n:int param.
 *Return: 0 if successful.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n < 2)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
