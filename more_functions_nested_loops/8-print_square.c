#include "main.h"

/**
 * print_square - prints '#' depending
 * on a supplied number in a shape of square
 * @size: number of times the '#' and newlines
 * that determine the size of the square
 * Return: void
 */

void print_square(int size)

{
	int width = 0;
	int height = 0;

	if (size > 0)

	{
		while (height < size)

		{
			while (width < size)

			{
			_putchar('#');
			width++;

			}
		_putchar('\n');
		height++;
		width = 0;
		}

	}

	else

	{
	_putchar('\n');
	}

}

