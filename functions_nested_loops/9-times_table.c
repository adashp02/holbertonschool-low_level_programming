#include "main.h"

/**
 * times_table - prints out results
 * of number 9's time tables
 * separated with a comma and double space
 */

void times_table(void)

{

	int x, y, z;

	for (x = 0; x <= 9; x++)

	{

		for (y = 0; y <= 9; y++)

		{
			z = x * y;
			if (y == 0)

			{
				_putchar (y + '0');

			}

			if (z < 10 && y != 0)

			{
				_putchar (',');
				_putchar (' ');
				_putchar (' ');
				/* line below converts a digit into ASCII */
				_putchar (z + '0');

			}

			else if (z >= 10)

			{
				_putchar (',');
				_putchar (' ');
				/* line below divide by 10 and converts a digit into ASCII */
				_putchar ((z / 10) + '0');
				/* line below modulo by 10 and converts a digit into ASCII */
				_putchar ((z % 10) + '0');

			}


		}

		_putchar ('\n');
	}

}
