#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: a string to be printed out
 */

void print_rev(char *s)

{
	/* 'slen' is a number of characters */
	int slen = 0;
	int i;

	while (s[slen] != '\0')

	{
	slen++;
	}

	i = slen - 1;

	while (i >= 0)

	{

	_putchar(s[i]);
	i--;
	}

	_putchar('\n');

}
