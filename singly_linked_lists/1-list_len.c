#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns amount of elements
 * from the list list_t
 * @h: pointer to the list_t
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)

{
	size_t number = 0;

	while (h)

	{
		number++;
		h = h->next;
	}

	return (number);

}
