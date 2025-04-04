#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node starting form 0
 *
 * Return: NULL if the node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)

{
	if (!head)
		return (NULL);

	while (head->prev)
		head = head->prev;

	index = 0;

	while (head)

	{
		if (index)
			break;

		head = head->next;
		index++;
	}

	return (head);

}
