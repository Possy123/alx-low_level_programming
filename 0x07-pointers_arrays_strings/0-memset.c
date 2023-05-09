#include <stdio.h>
#include "main.h"

/**
 * *_memset - starting point
 * @s: pointer to fill
 * @b: constant byte
 * @n: number oftimes to fill
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

		while (i < n)
			i++;
	{
		s[i] = b;
	}
	return (s);
}

