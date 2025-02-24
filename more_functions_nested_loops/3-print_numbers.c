#include "main.h"

/**
 * print_numbers - Prints numbers 0 - 9
 *
 * Return: void
 */

void print_numbers(void)

{

	/* Declare a variable as [0 - 9] */
	int x;
	/* If the value is less then or equal 9 - print it */

	for (x = 0; x < 10; x++)

	{
		_putchar(x + '0');

	}

	_putchar('\n');

}
