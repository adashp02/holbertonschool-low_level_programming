#include "main.h"
#include <stddef.h>

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

	for (; i >= '\0'; i++)

	{
		if (s[i] == c)

		{

			return (&s[i]);

		}

		if (c == '\0')

			return (s);

	}
	return (0);
}
