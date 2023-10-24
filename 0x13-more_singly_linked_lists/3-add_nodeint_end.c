#include "lists.h"

/**
 * add_nodeint_end - adds a new node to the end of list
 * @head: pointer to first element of the list
 * @n: integer for new node.
 * Return: new address element, or NULl failed
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *mem, *type = *head;

	mem = malloc(sizeof(listint_t));
	if (mem == NULL)
		return (NULL);
	mem->n = n;
	mem->next = NULL;

	if (type)
	{
		while (type->next)
			type = type->next;
		type->next = mem;
	}
	else
		*head = mem;

	return (mem);
}
