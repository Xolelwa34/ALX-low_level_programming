#include "lists.h"

/**
 * sum_listint - sum of nodes of the given linked list
 * @head: pointer to node of the list
 *
 * Description: returns the sum of all data(n)
 * Return: null
 */
int sum_listint(listint_t *head)
{
	unsigned int value = 0;

	while (head != NULL)
	{
		value += head->n;
		head = head->next;
	}
	return (value);
}
