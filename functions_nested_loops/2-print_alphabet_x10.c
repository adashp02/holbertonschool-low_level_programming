#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 *
 * return: void
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

	while (i < 10)
	{
		/* Declare a variable as [a - z] */

		ch = 'a';

		/* If the value is less then or equal z - print it */

		while (ch <= 'z')
		{
			_putchar(ch);

			/* increment the value by 1 (a to b etc.) */

			ch++;
		}
		_putchar('\n');

		/* increment the value of 'i' by 1 (0 to 1 etc.) */

		i++;
	}
}
