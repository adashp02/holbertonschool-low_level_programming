#include "main.h"

/**
 *_memcpy - copies n bytes from src to dest
 * @src: source of the n bytes
 * @dest: destination
 * @n: amount of bytes
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int count;

	for (count = 0; count < n; count++)

	{
		dest[count] = src[count];

	}

	return (dest);

}
