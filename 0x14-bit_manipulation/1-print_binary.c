#include <stdio.h>
#include "main.h"
/**
 * print_binary - print binary
 * @n: integer
 */
void print_binary(unsigned long int n)
{
	int start = 0;
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar('1');
			start = 1;
		}
		else if (start)
		{
			_putchar('0');
		}
		mask >>= 1;
	}

	if (!start)
		_putchar('0');
}
