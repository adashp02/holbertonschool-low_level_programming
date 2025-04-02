#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the head of the list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)

{
	int i = 0;

	if (!h)
		return (i);

	while (h->prev)
		h = h->prev;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
