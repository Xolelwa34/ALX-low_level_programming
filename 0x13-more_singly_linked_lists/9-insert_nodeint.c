#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at a specific position
 * @head: pointer to head of the first node of the list
 * @idx: index
 * @n: integer
 *
 * Description: inserts a new node at in the exact position
 * Return: address of a new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *str, *num;
	unsigned int value = 0;

	if (head == NULL)
		return (NULL);

	str = malloc(sizeof(listint_t));
	if (str == NULL)
		return (NULL);
	str->n = n;
	num = *head;

	if (idx == 0)
	{
		str->next = *head;
		*head = str;
		return (*head);
	}

	while (num != NULL)
	{
		if (value == idx - 1)
		{
			str->next = num->next;
			num->next = str;
		}
		value++;
		num = num->next;
	}
	if (idx > value)
		return (NULL);
	return (str);

}
