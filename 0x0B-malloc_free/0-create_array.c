#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars
 * @size: size
 * @c: character
 * Return: pointer array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
	{
		return (NULL);
	}
	str = malloc(size * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
