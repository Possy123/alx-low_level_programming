#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 *
 * @n: The starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
    int i;

    if (n <= 98)
    {
        for (i = n; i < 98; i++)
        {
            putchar(i / 10 + '0');
            putchar(i % 10 + '0');
            putchar(',');
            putchar(' ');
        }
    }
    else
    {
        for (i = n; i > 97; i--)
        {
            putchar(i / 10 + '0');
            putchar(i % 10 + '0');
            putchar(',');
            putchar(' ');
        }
    }
    putchar('9');
    putchar('8');
    putchar('\n');
}
