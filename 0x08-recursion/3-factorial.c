#include <stdio.h>
#include "main.h"

/**
 * factorial - recursion
 * @n: factoria number
 * Return: it depends
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	return (n * factorial(n - 1));
}
