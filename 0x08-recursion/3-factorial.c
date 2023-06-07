#include <stdio.h>
#include "main.h"

/**
 * factorial - multiply the smallest numbers
 * @n: numbers
 * Return: values
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
