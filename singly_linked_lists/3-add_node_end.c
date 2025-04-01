#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a node at the end of linked list
 * @head: double pointer to list_t list
 * @str: string to ne inserted in the new node
 *
 * Return: address of the new element
 * or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)

{
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)

		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	temp->next = new;

	return (new);

}

