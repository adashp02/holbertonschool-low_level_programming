#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated memory space
 * containing a copy of a given string
 * @str: string given as a parameter
 *
 * Return: pointer to a newly allocated block of memory
 */

char *_strdup(char *str)

{
	unsigned int size = 0; /* initialize the size int */
	char *new_array;
	unsigned int i;

	if (str == NULL)

		return (NULL); /* in case string is empty */

	for (i = 0; str[i]; i++)

		size++; /* checking the size of source with iterator */

	new_array = malloc((size + 1) * sizeof(char));

	/* allocating memory per each character as sizeof(char) = 1 */

	if (new_array == NULL) /* if it fails */

		return (NULL);


	for (i = 0; i < size; i++)

	{
		new_array[i] = str[i]; /* copying the str char by char using iterator */

	}

	new_array[i] = '\0'; /* assigning a null char */


	return (new_array); /* return pointer to the new array */

}





