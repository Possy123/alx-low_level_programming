#include <stdio.h>
#include "main.h"

/**
 * get_bit - get bot value of an index
 * @n: integer
 * @index: index of the bit
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size = sizeof(unsigned long int) * 8 - 1;

	if (index > size)
		return (-1);
	return ((n >> index) & 1);
}
