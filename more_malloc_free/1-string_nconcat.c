#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenate 2 strings
 * returns  a pointer to memory with s1 and
 * n bytes of s2
 * @s1: first string
 * @s2: second string
 * @n: the amount of bytes to be taken from s2
 *
 * Return: pointer to memory allocated for the s1, s2
 */



char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	char *array = 0;
	unsigned int i;
	unsigned int j = 0;
	unsigned int size1 = 0;
	unsigned int size2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1 && s1[size1]) /* calculating memory size */
		size1++;

	while (s2 && s2[size2])
		size2++;

	if (n < size2) /* allocating memory if n bytes less then size of s2 */

		array = malloc((size1 + n + 1) * sizeof(char));

	else

		array = malloc((size1 + size2 + 1) * sizeof(char));

	if (array == NULL)

		return (NULL);

	for (i = 0; s1[i]; i++) /* concatenation placing s1 first */

		array[j++] = s1[i];

	for (i = 0; s2[i] && i < n; i++) /* appending n bytes of s2 if n less then s2 */

		array[j++] = s2[i];

	array[j] = '\0';


	return (array);

}
