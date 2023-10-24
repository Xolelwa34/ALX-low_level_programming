#include "lists.h"
#include <stdio.h>

/**
 * free_listint_safe - Frees the head
 * @h:pointer to head of the liist
 *
 * Return: null
 */
size_t free_listint_safe(listint_t **h)
{
	size_t c = 0;
	listint_t *head, *value;
	long str;

	if (!h)
		return (0);
	head = *h;
	*h = NULL;
	while (head)
	{
		c++;
		str = head->next - head;
		value = head;
		free(value);
		if (str >= 0)
			break;
		head = head->next;
	}
	return (c);
}
