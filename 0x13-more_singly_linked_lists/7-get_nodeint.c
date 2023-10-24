#include "lists.h"

/**
 * get_nodeint_at_index - return the data value stored in the node at the index position
 * @head: pointer to first node of linked list
 * @index: index
 * Return null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);

	if (index == 0)
		return (head);

	return (get_nodeint_at_index(head->next, index - 1));
}
