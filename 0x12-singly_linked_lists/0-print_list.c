#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - to print list
 * @h: str
 * Return: count
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while(h != NULL)
	{
		if (h->str == NULL)
			printf("[%ld] (nil)\n", count);
		else
			printf("[%ld] %s\n", count, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
