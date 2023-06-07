#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - raised to power in recursion
 * @x: base numbe
 * @y: raised to powe
 * Return: number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}
