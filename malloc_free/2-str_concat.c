#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concatenates 2 strings
 * @s1: a string
 * @s2: another string
 *
 * Return: a pointer to newly allocated memory
 */

char *str_concat(char *s1, char *s2)

{
	char *new_ar = 0;
	int i;
	int j = 0;
	int size = 0;

	if (s1 == NULL)

		s1 = "";

	if (s2 == NULL)

		s2 = "";


	for (i = 0; s1[i] && s2[i]; i++)

		size++;

	new_ar = malloc((size + 1) * sizeof(char));

	if (new_ar == NULL)

		return (NULL);

	for (i = 0; s1[i]; i++)

		new_ar[j++] = s1[i];

	for (i = 0; s2[i]; i++)

		new_ar[j++] = s2[i];

	new_ar[j] = '\0';

	return (new_ar);

}
