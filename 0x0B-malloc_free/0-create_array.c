#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *create_array - create an array of char
 * @size: size of array
 * @c: to initialize the array
 *
 * Return: Null or array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size == 0)
	{
		return (NULL);
	}
	ar = malloc(size * sizeof(char));

	if (ar == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	return (ar);
}
