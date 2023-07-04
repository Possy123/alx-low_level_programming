#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node - to add a new node
 * @head: head
 * @str: string
 * Return: new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
