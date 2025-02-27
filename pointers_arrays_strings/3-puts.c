#include "main.h"

/**
 * _puts - prints a string into stdout
 * @str: a string to be printed out
 */

void _puts(char *str)

{
	/* 'i' is a number of characters */
	int i = 0;

	while (str[i] != '\0')


	{

	_putchar(str[i]);
	i++;
	}

	_putchar('\n');

}
