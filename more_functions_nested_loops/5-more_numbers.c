#include "main.h"

/**
 * more_numbers - prints 10 times numbers 0 - 14
 *
 * return: void
 */
void more_numbers(void)
{
	int n;
	int i;


	for (n = 0; n < 10; n++)
	{
		/* Declare a variable as [0 - 14] */

		/* If the value is less then or equal 14 - print it */

		for (i = 0; i <= 14; i++)
		{
			if (i > 10)

			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');

			/* increment the value by 1 (a to b etc.) */

		}
		_putchar('\n');

		/* increment the value of 'n' by 1 (0 to 1 etc.) */

	}
}
