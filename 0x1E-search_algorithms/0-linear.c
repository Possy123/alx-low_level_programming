#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * linear_search - description
 * @array: array
 * @size: size
 * @value: value
 * Return: 0 or -2
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}
	return (-1);
}
