#include "lists.h"

/**
 * dlistint_len - returns the number of elements
 * in a linked dlistint_t list
 * @h: pointer to the head
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)

{
	int i = 0;

	if (!h)
		return (i);

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);

}
