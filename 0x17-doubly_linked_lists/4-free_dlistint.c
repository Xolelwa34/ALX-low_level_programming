#include "lists.h"
/**
 * free_dlistint - Frees dlistint_t linked lists
 * @head: pointer to linked lists head
 */
void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		free_dlistint(head->next);
		free(head);
	}
}
