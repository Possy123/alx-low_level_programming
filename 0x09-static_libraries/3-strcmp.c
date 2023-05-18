#include <stdio.h>
#include "main.h"

/**
 * _strcmp - still learning
 * @s1: still learning
 * @s2: still learning
 * Return: i do not know
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (s1[i] - s2[i]);
		i++;
	}

	return (s1[i] - s2[i]);
}

