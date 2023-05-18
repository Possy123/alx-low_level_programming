#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - I do not know
 * @s: I do not know
 * @accept: I do not know
 * Return: 0 or 1
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}

return ('\0');
}

