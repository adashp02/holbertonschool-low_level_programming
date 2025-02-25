#include "main.h"

/**
 * print_diagonal - prints / diagonally depending on a number supplied
 *
 * Return: n
 */

void print_diagonal(int n)

{
	int hor = 0;
	int ver = 0;

	if (n > 0)
	{
		while (ver < n)
		{
			while (hor < ver)
			{
				_putchar(' ');

				hor = hor + 1;

			}

			_putchar('\\');

			ver = ver + 1;

			hor = 0;

			if (ver != n)
			{
				_putchar('\n');
			}

		}
	}
	_putchar('\n');
}
