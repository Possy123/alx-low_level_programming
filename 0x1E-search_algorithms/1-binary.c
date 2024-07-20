#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - binary search
 * @array: pointer to the first element
 * @size: number of element
 * @value: the value searched for
 * Return: 0 or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t L = 0;
	size_t R = size - 1;
	size_t m;

	if (array == NULL)
		return (-1);

	while (L <= R)
	{
		printf("Searching in array: ");
		for (m = L; m < R; m++)
			printf("%d, ", array[m]);
		printf("%d\n", array[m]);

		m = L + (R - L) / 2;
		if (array[m] == value)
			return (m);
		if (array[m] > value)
			R = m - 1;
		else
			L = m + 1;
	}

	return (-1);
}
