#include "main.h"

/**
 * print_sign - prints 1+ for positive, 1- for negative numbers
 * or 0 for zero
 * @n: is any number
 * Return: int 1+ or 1- or 0
 *
 */

int print_sign(int n)
/* no need to declare n - already done in prototype */
{

	if (n > 0)
	{
	_putchar('+');

	return (1);
	}

	else if (n < 0)

	{
	_putchar('-');

	return (-1);
	}

	else

	{
	_putchar('0');

	return (0);

	}
}
