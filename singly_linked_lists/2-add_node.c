#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds new node to the head
 * of the linked list
 * @head: pointer to the pointer to the
 * head of the list
 * @str: string to be inserted in the new node
 *
 * Return: address of the new element
 * of NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)

{
	list_t *new;
	int len;
	char *new_str;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new_str = strdup(str);

	if (!new_str)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = new_str;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);

}
