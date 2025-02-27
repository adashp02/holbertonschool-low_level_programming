#include "main.h"

/**
 * _strlen - counts chars in a string
 * @s: a string to check the amount of chars in
 * Return: length of the string (amount of chars)
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

