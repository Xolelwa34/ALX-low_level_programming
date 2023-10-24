#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Function that frees a list
 * @head: A pointer to the head  of the list
 */
void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
			type_def(head->next);
		type(head->mem);
		type(head);
	}
}
