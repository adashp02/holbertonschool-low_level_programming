#include "main.h"

/**
 * _strchr - Returns a pointer to the first occurrence
 * of the character c in the string s,
 * or NULL if the character is not found
 * @s: string being checked
 * @c: the character being searched for
 *
 * Return: a pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)

{
	int i = 0;

	while (i != '\0')

	{
		if (s[i] == c)

		{

			return (s + 1);

		}

		i++;


	}
	return (0);
}
