#include "lists.h"
#include <stdio.h>


/**
 * dlistint_len - takes pointer to the head of doubly linked list
 * @h: pointer to list
 * Return: the number of nodes
 **/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t count = 0;

	while (node)
	{
		count++;
		node = node->next;
	}

	return (count);
}
