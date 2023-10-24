#include "lists.h"

/**
 * pop_listint - removes the head node of a linked list
 * @head: pointer to the element in the linked list
 *
 * Return: nulll
 */
int pop_listint(listint_t **head)
{
	int str = 0;
	listint_t *sum;

	if (*head == NULL)
		return (0);
	str = (*head)->n;
	sum = *head;
	*head = (*head)->next;
	free(sum);

	return (str);
}
