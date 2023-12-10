#include "lists.h"
#include <string.h>
/**
 * add_nodeint - adds node to the listint linked list
 * @head: pointer to a list_t linked list
 * @n: integer
 *
 * Return: pointer to the head of the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head;

	new_head = *head;
	*head = malloc(sizeof(listint_t));
	if (!*head)
		return (NULL);
	(*head)->n = n;
	(*head)->next = new_head;
	return (*head);
}
