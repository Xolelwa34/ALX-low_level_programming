#include "lists.h"

/**
 * sum_dlistint - Returns the sum of data of dlistint_t list
 * @head: pointer head to list
 * Return: sum of data in the list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
