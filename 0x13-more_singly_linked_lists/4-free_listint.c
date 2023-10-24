#include "lists.h"
/**
 * free_listint - function that frees a linked list
 * @head: head of linked list
 * Return: pointer to the head of the listint_t to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *str;

	while (head)
	{
		str = head->next;
		free(head);
		head = str;
	}
}
