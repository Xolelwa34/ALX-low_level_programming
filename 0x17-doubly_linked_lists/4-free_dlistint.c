#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees dlistint_t linked lists
 * @head: pointer to linked lists head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next_node;

	while (head != NULL)
	{
		next_node = head->next;
		free(head);
		head = next_node;
	}
}
