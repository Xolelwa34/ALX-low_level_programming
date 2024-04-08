#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes a node of a dlistint_t list at a given point
 * @head: pointer to linked list head
 * @index: index to delete
 * Return: 1 if Successful, 0 if fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *count;
	unsigned int c;

	if (head == NULL || *head == NULL)
		return (-1);
	count = *head;
	if (index == 0)
	{
		*head = count->next;
		if (count->next != NULL)
		{
			count->next->prev = NULL;
		}
		free(count);
		return (1);
	}
	for (c = 0; c < index; c++)
	{
		if (count->next == NULL)
			return (-1);
		count = count->next;
	}
	count->prev->next = count->next;
	if (count->next != NULL)
		count->next->prev = count->prev;
	free(count);
	return (1);
}
