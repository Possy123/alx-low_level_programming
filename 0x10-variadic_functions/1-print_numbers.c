#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - to print out numbers
 * @separator: to separate numbers
 * @n: number
 * Return: number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list sep;

	va_start(sep, n);

	while (i < n)
	{
		printf("%d", va_arg(sep, int));

	if (separator != NULL && i < n - 1)
	{
		printf("%s", separator);
	}
	i++;
	}
	printf("\n");

		va_end(sep);
}
