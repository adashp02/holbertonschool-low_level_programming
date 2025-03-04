#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with constant bytes
 *@n: number of bytes
 *@b: constant
 *@s: pointer to return to
 *Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int count;

	for (count = 0; count < n; count++)
	
	{
		s[count] = b;

	}

	return (s);

}

