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

		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)

			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');

		}
		_putchar('\n');

	}
}
