#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string that has number of matching chars with s
 *
 * Return: Returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)

{
	unsigned int n = 0; /* number of matching bytes */
	int i;
	int j;
	int end; /* when it stops finding matched chars */

	/* count of chars in s */
	for (i = 0; s[i] != '\0'; i++)

	{
		end = 0;
		/* count of chars in accept */
		for (j = 0; accept[j] != '\0'; j++)

		{	/* when they match */
			if (s[i] == accept[j])

			{

			n++;
			end = 1;

			}

		}
		if (end == 0)
		{
			return (n);
		}

	}

	return (0);

}
