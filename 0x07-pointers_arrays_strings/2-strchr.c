#include <stdio.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: the string to check
 * @c: that charcter we are looking for
 * Return: NULL if string is not found
 */
char *_strchr(char *s, char c)
{
	while (*s >= '\0')
	{
		if (*s == c)
			s++;
		return (s);
	}

	return (NULL);
}
