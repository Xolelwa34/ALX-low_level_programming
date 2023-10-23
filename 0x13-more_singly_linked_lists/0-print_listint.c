#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints the element of a list
 * @h: The pointer to the head of list
 *
 * Return: Number  nodes in list
 */
size_t print_listint(const listint_t *h)
{
	size_t n_nodes = 0;

	if (!h)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n_nodes++;
	}
	return (n_nodes);
}

