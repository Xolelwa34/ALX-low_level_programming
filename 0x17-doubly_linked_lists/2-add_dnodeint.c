#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds node to the listint linked list
 * @head: pointer to a list_t linked list
 * @n: integer
 *
 * Return: pointer to the head of the list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *count;

	if (head == NULL)
		return (NULL);
	count = malloc(sizeof(dlistint_t));
	if (count == NULL)
		return (NULL);
	count->n = n;
	count->prev = NULL;
	count->next = *head;
	*head = count;
	if (count->next != NULL)
		(count->next)->prev = count;
	return (count);
}
