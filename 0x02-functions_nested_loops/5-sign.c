#include <stdio.h>
#include "main.h"

/**
 * print_sign - to print the sign before numbers
 * @n: interger that represents number
 * Return: can either be 1, 0 or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
