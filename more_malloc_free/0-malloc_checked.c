#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned int that needs to be allocated
 *
 * Return: a pointer to allocated memory
 */

void *malloc_checked(unsigned int b)

{
	void *ptr;

	ptr = malloc(b);
	/* allocating memory for b */

	if (ptr == NULL)

		exit(98);
	/* if malloc unsuccesful - exit with code 98 */

	return (ptr);

}
