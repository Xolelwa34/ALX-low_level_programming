#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds a new node at the end of the listint_t linked lists
 * @head: pointer to linked list head
 * @n: integer 
 * Return: Address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *ret = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (ret)
	{
		while (ret->next)
			ret = ret->next;
		new->prev = ret;
		ret->next = new;
	}
	else
	{
		*head = new;
		new->prev = NULL;
	}

	return (new);
}
