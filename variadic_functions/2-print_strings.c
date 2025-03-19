#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string printed in between
 * @n: number of strings passed into the function
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)

{
	unsigned int i;
	char *string;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)

	{
		string = va_arg(list, char *);

		if (string == NULL)
			printf("(nil)");

		if (separator == NULL)
			printf("%s", string);

		else if (separator && i == 0)
			printf("%s", string);

		else
			printf("%s%s", separator, string);

	}

	printf("\n");

	va_end(list);

}
