#include <stdio.h>
#include "main.h"

/**
 * set_bit - set bit at a given index to 1
 * @n: numer
 * @index: index
 * Return: 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size = sizeof(unsigned int) * 8 - 1;

	if (index > size)
		return (-1);
	*n |= 1UL << index;

	return (1);
}
