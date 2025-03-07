#include "main.h"

int help_check(int i, int n);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: a number to be square rooted
 *
 * Return: the result
 */

int _sqrt_recursion(int n)

{

	if (n < 0)

		return (-1);

	return (help_check(0, n));

}


/**
 * help_check - checks recursively for
 * a natural square root
 * @i: testing iterator
 * @n: the number to be square-rooted
 *
 * Return: result
 */

int help_check(int i, int n)

{


	if (i * i > n)

		return (-1);

	if (i * i == n)

		return (i);

	return (help_check(i + 1, n));

}


