#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all -addition
 * @n: count
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result = 0;

	va_list sum;

	if (n == 0)
	{
		return (0);
	}

	va_start(sum, n);

	for (i = 0; i < n; i++)
	{
		result = result +  va_arg(sum, int);
	}

	va_end(sum);
	return (result);
}
