#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *add_node - A function that adds a new node in the beginning of the list.
 *@head: A pointer to  head of the list
 *@str: string to be duplicated
 *
 *Return: address of the new list or NULL if it's unsuccessful
 */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *n_node;

	while (str[i])
	{
		i++;
	}
	n_node = malloc(sizeof(list_t));

	if (n_node != NULL)
	{
		n_node->str = strdup(str);
		n_node->len = i;
		n_node->next = *head;

		*head = n_node;
		return (n_node);
	}
	else
	{
		return (NULL);
	}
}

