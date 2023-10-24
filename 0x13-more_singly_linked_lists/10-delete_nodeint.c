#include "lists.h"
#include <stdio.h>
/**
 * delete_nodeint_at_index - removes node which takes two arguments
 * @head: pointer to head of first node in a linked list
 * @index: element index
 * Return: pointer to the head of the list
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *value, *c_next;
	unsigned int sum = 0;

	value = *head;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = value->next;
		free(value);
		return (1);
	}
	if (index == 1)
	{
		value = (*head)->next;
		(*head)->next = value->next;
		free(value);
		return (1);
	}
	while (sum < index - 1)
	{
		if (value->next == NULL)
			return (-1);
		sum++;
		value = value->next;
		c_next = value->next;
	}
	value->next = c_next->next;
	free(c_next);

	return (1);
}
