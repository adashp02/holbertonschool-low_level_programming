#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @s: string to modify
 *
 * Return: the resulting string
 */


char *string_toupper(char *s)

{
	int count;

	for (count = 0; s[count] != '\0'; count++)

	{
		if (s[count] >= 'a' && s[count] <= 'z')

		s[count] = s[count] - 32; /* shifting 32 positions down the ascii list */
					/* from 'a' to 'A' */

	}

	return (s);

}
