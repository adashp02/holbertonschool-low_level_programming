#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - returns sum of all its parameters
 * @n: first argument
 *
 * Return: sum of all args
 */

int sum_them_all(const unsigned int n, ...)

{
	int sum = 0;
	unsigned int i;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)

	sum += va_arg(list, int);

	va_end(list);

	return (sum);

}
