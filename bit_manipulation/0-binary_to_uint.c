#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts binary to u_int
 * @b: pointer to a string of 0 and 1's
 *
 * Return: converted number or 0 if non 0 or 1
 * or b is NULL
 */

int check_string(const char *b);

unsigned int binary_to_uint(const char *b)

{
	unsigned int decimal = 0;
	int base = 1;
	int len = 0;

	if (!check_string(b))
		return (0);


	while (b[len] != '\0')
		len++;

	while (len)
	{

		decimal += ((b[len - 1] - '0') * base);
			base *= 2;
			len--;
	}

	return (decimal);
}

/**
 * check_string - checks if a string has only 0's and 1's
 * @b: string to be checked
 *
 * Return: 1 if string is valid, 0 otherwise
 */
int check_string(const char *b)
{
	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);
		b++;
	}
	return (1);

}

