#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - inserts a node at a given position
 * @h: pointer to the list
 * @idx: index to insert a new node
 * @n: data to new node
 * Return: address of the new node, or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *a, *next, *count;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		count = *h;
		for (i = 0; i < idx - 1 && count != NULL; i++)
			count = count->next;
		if (count == NULL)
			return (NULL);
	}
	a = malloc(sizeof(dlistint_t));
	if (a == NULL)
		return (NULL);
	a->n = n;
	if (idx == 0)
	{
		next = *h;
		*h = a;
		a->prev = NULL;
	}
	else
	{
		a->prev = count;
		next = count->next;
		count->next = a;
	}
	a->next = next;
	if (a->next != NULL)
		a->next->prev = a;
	return (a);
}
