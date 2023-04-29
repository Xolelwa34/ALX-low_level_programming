#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
* add_node_end - A function that adds a new node in the end of a singly linked list.
* @head: a linked list head
* @str: String in the lists
*
* Return: Always 0.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *n_node;
	unsigned int a = 0;

	if (str == NULL)
		return (NULL);

	while (str[a++])
		;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = --a;
	new_node->next = NULL;

	if (*head == NULL)
	{
		(*head) = new_node;
		return (new_node);
	}

	n_node = *head;
	while (n_node->next)
		n_node = n_node->next;

	n_node->next = new_node;

	return (new_node);
}
