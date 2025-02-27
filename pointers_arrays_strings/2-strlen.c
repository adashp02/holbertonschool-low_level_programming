#include "main.h"

/**
 * _strlen - counts chars in a string
 * @s: a string to check the amount of chars in
 *
 */

int _strlen(char *s)

{
	int length = 0;

	while (s[length] != '\0')

	{
	length++;
	}

	return (length);

}

