#include "lists.h"
/**
 * free_listint2 - fuction that frees a linked list
 * @head:pointer to the  head of linked list
 * Return: null
 */
void free_listint2(listint_t **head)
{
	listint_t *str;

	if (head)
	{
		while (*head)
		{
			str = *head;
			*head = str->next;
			free(str);
		}
	}
}
