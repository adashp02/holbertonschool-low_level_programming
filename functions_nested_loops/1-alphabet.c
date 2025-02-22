#include "main.h"

/**
 * print_alphabet - Print the alphabet in lowercase
 *
 * Return: void
 */

void print_alphabet(void)

{

	/* Declare a variable as [a - z] */
	char ch = 'a';
	/* If the value is less then or equal z - print it */

	while (ch <= 'z')

	{
		_putchar(ch);
		/* increment the value by 1 (a to b etc.) */
		ch++;

	}

	_putchar('\n');

}
