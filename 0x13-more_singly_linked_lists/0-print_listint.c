#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - print all the elements listed
 * @h: pointer to the head of the list
 * Return: the number of node
 */
size_t print_listint(const listint_t *h)
{
	size_t list = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		list++;
	}
	return (list);
}
