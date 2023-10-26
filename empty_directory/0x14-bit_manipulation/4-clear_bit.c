#include <stdio.h>
#include "main.h"
/**
 * clear_bit - set bit to 0
 * @index: strating from 0
 * @n: number
 * Return: 1 0r -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n & ~mask;
	return (1);
}
