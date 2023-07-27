#include <stdio.h>
#include "main.h"
/**
 * flip_bits - to flip the number of bits
 * @n: number
 * @m: number
 * Return: count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff > 0)
	{
		count += diff & 1;
		diff >>= 1;
	}

	return (count);
}

