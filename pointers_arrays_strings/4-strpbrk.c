#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - locates first occurence in s
 * of any of the bytes from accept
 * @s: string to evaluate
 * @accept: string to check for matching bytes
 *
 * Return: pointer to first occurence of matching byte
 * or NULL if no match
 */

char *_strpbrk(char *s, char *accept)

{
	int i;
	int j;

	for (i = 0; *s != '\0'; i++)

	{
		for (j = 0; accept[j] != '\0'; j++)

		{
			if (*s == accept[j])

			{
				return (s);
			}

		}
		s++;

	}

	return (NULL);

}
