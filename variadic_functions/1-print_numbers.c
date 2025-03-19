#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @n: number of ints passed to the function
 * @separator: string to be printed between numbers
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)

{
	unsigned int i;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)

	{
		if (separator == NULL)

			printf("%d", va_arg(list, int));

		else if (separator && i == 0)

			printf("%d", va_arg(list, int));

		else
			printf("%s%d", separator, va_arg(list, int));

	}

	va_end(list);

	printf("\n");

}
