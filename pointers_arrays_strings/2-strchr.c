#include "main.h"
#include "string.h"

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
	int i;

	for (i = 0; s[i] != '\0'; i++)

	{
		if (s[i] == c)

		{

			return (&s[i]);

		}

		if (c == '\0')

		{
		return (s);
		}

	}
	return (NULL);
}
