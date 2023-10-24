#include "lists.h"
/**
 * reverse_listint - reverse a linked list
 * @head: pointer to the first node in the list
 * Return: pointer to the first node new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *value = NULL, *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = value;
		value = *head;
		*head = next;
	}

	*head = value;
	return (*head);
}

