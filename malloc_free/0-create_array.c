#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array
 * @c: character to initialize the array with
 *
 * Return: pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)

{
	unsigned int i;
	char *array;

	/* if there is no memory */

	if (size == 0)

		return (NULL);

	/* allocate memory with malloc */
	array = malloc(size * sizeof(char));

	/* if allocation unsuccesful */

	if (array == NULL)

		return (NULL);

	/* iterate through elements of array and check against char c */

	for (i = 0; i < size; i++)

		array[i] = c;

	/* return the pointer to the start of the array */
	return (array);

}
