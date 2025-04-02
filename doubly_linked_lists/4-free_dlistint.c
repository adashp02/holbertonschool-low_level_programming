#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the head of the list
 *
 * Return: 0
 */

void free_dlistint(dlistint_t *head)

{
	dlistint_t *temp;

	if (head)

		while (head->prev)
			head = head->prev;

	while ((temp = head))
	{
		head = head->next;
		free(temp);
	}
}
