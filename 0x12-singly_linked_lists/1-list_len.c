#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * list_len - returns number of elements in linked list.
 * @h: head of singly lists
 *
 * Return: number of nodes.
 */
size_t list_len(const list_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}

