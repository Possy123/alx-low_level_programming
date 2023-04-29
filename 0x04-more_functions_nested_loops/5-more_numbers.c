#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints number multiple times
 *
 * Return: none
 */
void more_numbers(void)
{
	int a,  num;

	for (a = 0; a < 10; a++)
	{
		for (num = 0; num <= 14 ; num++)
		{
			if (num >= 10)
				putchar('1');
			putchar('0' + num % 10);
		}
		putchar('\n');
	}
}

