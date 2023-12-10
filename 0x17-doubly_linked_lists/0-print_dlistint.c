#include "lists.h"

/**
 * print_dlistint - prints the elements of dlistint_t
 * @h: pointer to list
 *
 * Return: nodes number
 */
size_t print_listint(const listint_t *h)
{
	size_t new_nodes = 0;
	const listint_t *h;

	h = h;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		new_nodes++;
	}
	return (new_nodes);
}

