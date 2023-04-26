#include <stdio.h>
#include "main.h"

/**
 * _islower - is to print lowercase
 * c - is character
 * Return: can be 0 or 1.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
