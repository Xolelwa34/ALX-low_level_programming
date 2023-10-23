#include "lists.h"
#include <string.h>
/**
 * add_nodeint - adds a new node in the beggining of the listint_t
 * @head: pointer to a list_t that points to the head
 * @n: integer for a new node
 *
 * Return: new element of the list, NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *my_list;

	my_list = *head;
	*head = malloc(sizeof(listint_t));
	if (!*head)
		return (NULL);
	(*head)->n = n;
	(*head)->next = my_list;
	return (*head);
}
