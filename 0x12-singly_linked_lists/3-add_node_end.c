#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node_end - to add a new node
 * @head: head
 * @str: string
 * Return: node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *temp;

	if (str == NULL)
		return (NULL);
	node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	node->len = strlen(str);
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
		temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = node;

	return (node);
}
