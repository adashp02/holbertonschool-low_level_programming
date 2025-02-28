#include "main.h"

/**
 * rev_string - reverses the characters order
 * @s: a string to be reversed
 */

void rev_string(char *s)

{
	/* 'count' is a number of characters */
	int count = 0;
	int len;
	/* len is the length in reverse */
	char tmp;
	/* temporary storage of chars while swapping */


	while (s[count] != '\0')

	{
		count++;

	}

	count--;
	len = count;


	while (count > (len / 2))

	{
		tmp = s[count];
		s[count] = s[len - count];
		s[len - count] = tmp;

		count--;
	}

}
