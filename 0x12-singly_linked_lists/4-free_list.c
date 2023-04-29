#include "lists.h"
#include <stdlib.h>

/**
 * free_list - A function that frees a list.
 * @head: pointer to free list_t list
 *
 * Return: On 0.
 */
void free_list(list_t *head)
{
	list_t *n_node;

	while (head != NULL)
	{
		n_node = head;
		head = head->next;
		free(n_node->str);
		free(n_node);
	}
}
