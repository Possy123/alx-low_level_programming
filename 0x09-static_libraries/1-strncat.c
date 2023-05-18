#include <stdio.h>
#include "main.h"

/**
 * _strncat - still learning
 * @dest: still learning
 * @src: still learning
 * @n: still learning
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0;
	int len2 = 0; 
	int i;

	while (src[len1] != '\0')
		len1++;

	while (dest[len2] != '\0')
		len2++;

	for (i = 0; i < n; i++)
	{
		dest[len2] = src[i];
		len2++;
	}
	return (dest);
}
