#include "main.h"

/**
 * print_most_numbers - Prints numbers 0 - 9
 * except 2 and 4
 * Return: void
 */

void print_most_numbers(void)

{

	/* Declare a variable as [0 - 9] */
	int x;
	/**
	 * If the value is less then or equal 9
	 * and its'not 2 or 4 - print it
	 */

	for (x = 0; x < 10; x++)

	{
		if (x != 2 && x != 4)

		{
		_putchar(x + '0');
		}

	}

	_putchar('\n');

}
