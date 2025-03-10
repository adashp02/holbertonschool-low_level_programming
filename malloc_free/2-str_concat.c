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
	int size1 = 0;
	int size2 = 0;

	if (s1 == NULL) /* if one of the strings is null
			   return empty string */

		s1 = "";

	if (s2 == NULL)

		s2 = "";


	while (s1 && s1[size1]) /* calculating the amount of memory
				   for each string */

		size1++;

	while (s2 && s2[size2])

		size2++;

	new_ar = malloc((size1 + size2 + 1) * sizeof(char));
	/* allocating memory for the sum of both str sizes */

	if (new_ar == NULL)

		return (NULL);

	for (i = 0; s1[i]; i++) /* concatenation of both strings */

		new_ar[j++] = s1[i];

	for (i = 0; s2[i]; i++)

		new_ar[j++] = s2[i];

	new_ar[j] = '\0';

	return (new_ar);

}
