#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: integer to put through modulo (% 10)
 * Return: int that is a last digit
 */
int print_last_digit(int n)

{
	int a;

	if (n < 0)
	n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);

}
