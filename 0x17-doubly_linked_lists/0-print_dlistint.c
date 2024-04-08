#include "lists.h"

/**
 * print_dlistint - Prints the elements of dlistint_t list
 * @h: dlistint head
 *
 * Return: number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
