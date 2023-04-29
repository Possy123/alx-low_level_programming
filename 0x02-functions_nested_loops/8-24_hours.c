#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prints time
 *
 * Description: prints a list of time
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar(h / 10 + 48);
			_putchar(h % 10 + 48);
			_putchar(':');
			_putchar(m / 10 + 48);
			_putchar(m % 10 + 48);
			_putchar('\n');
		}
	}
}
