#include "lists.h"

/**
 * print_dlistint - prints the elements of dlistint_t
 * @h: pointer to list
 * Return: nodes number
 **/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t count = 0;

	while (node)
	{
		printf("%i\n", node->n);
		count++;
	 	node = node->next;
	}

	return (count);
}
