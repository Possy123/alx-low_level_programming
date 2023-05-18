#include <stdio.h>
#include "main.h"

/**
 * _strlen - length of a string
 *
 * @s: character
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

		return (length);
}
