#include "lists.h"
#include <stdio.h>
/**
 * print_list - Function that prints the elements of the linked list
 * @h:The pointer to the list-t list to print
 * Return: the number of printed nodes
 */
size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
	if (h->str == NULL)
	printf("[0] (nil)\n");
	else
	printf("[%u] %s\n", h->len, h->str);
	h = h->next;
	num++;
	}

	return (num);
}
