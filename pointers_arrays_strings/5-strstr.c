#include "main.h"
#include <stdio.h>

/**
 * _strstr - finds the first occurrence of the
 * substring needle in the string haystack
 * The terminating null bytes (\0) are not compared
 * @haystack: string to be evaluated
 * @needle: substring to be found
 *
 * Return: Returns a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)

{	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)

	{
		for (j = 0; needle[j] != '\0'; j++)

		{
			if (haystack[i + j] != needle[j])

				break;

		}
		if (needle[j] == '\0')

			return (&haystack[i]);

	}

	return (NULL);

}
