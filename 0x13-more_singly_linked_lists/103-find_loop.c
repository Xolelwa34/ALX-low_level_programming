#include "lists.h"

/**
 * find_listint_loop - checks  the list if it has a loop or not
 * @head: pointer to a list
 *
 * Return: null
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *str = head;
	listint_t *value = head;

	while (str != NULL && value != NULL && value->next != NULL)
	{
		str = str->next;
		value = (value->next)->next;

		if (str == value)
		{
			str = head;
			while (str != value)
			{
				str = str->next;
				value = value->next;
			}

			return (str);
		}
	}

	return (NULL);
}
