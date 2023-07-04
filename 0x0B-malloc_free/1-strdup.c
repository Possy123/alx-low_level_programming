#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - returns function to a new string
 * @str: string
 * Return: ptr
 */
char *_strdup(char *str)
{
	char *ptr;
	int len = 0;
	int j;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
		len++;

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
		return (NULL);
	for (j = 0; j < len; j++)
		ptr[j] = str[j];
	ptr[len] = '\0';

	return (ptr);
}
