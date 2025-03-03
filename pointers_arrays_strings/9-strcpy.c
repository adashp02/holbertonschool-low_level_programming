#include "main.h"

/**
 * _strcpy - copies and pastes a string
 * to another destination
 * @src: string to be copied
 * @dest: destination string
 * Return: dest
 */

char *_strcpy(char *dest, char *src)

{
	int len, i;

	len = 0;

	while (src[len] != '\0')

	{
		len++;

	}

	for (i = 0; i < len; i++)

	{
		dest[i] = src[i];

	}

	dest[i] = '\0';

	return (dest);

}
