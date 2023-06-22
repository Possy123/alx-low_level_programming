#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: separate numbers
 * @n: count numbers
 * Return: value
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list print;

	va_start(print, n);
	for (i = 0; i < n; i++)
	{
		int num = va_arg(print, int);

		printf("%d", num);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(print);

	printf("\n");
}
