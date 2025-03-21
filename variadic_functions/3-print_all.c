#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything following the list of types
 * @format: list of types of args passed to the function
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)

{
	/* list of types */
	char c;
	int i;
	float f;
	char *s;


	va_list list;
	int index = 0;
	/* separator is empty at the start */
	char *sep = "";

	va_start(list, format);

	if (format)
	{
		while (format[index])
		{
			switch (format[index])
			{
				case 'c':
					c = va_arg(list, int);
					printf("%s%c", sep, c);
					break;

				case 'i':
					i = va_arg(list, int);
					printf("%s%d", sep, i);
					break;

				case 'f':
					f = va_arg(list, double);
					printf("%s%f", sep, f);
					break;

				case 's':
					s = va_arg(list, char *);
					/* if string is NULL */
					if (!s)
						s = "(nil)";
					printf("%s%s", sep, s);
					break;

				default:
					index++;
					continue;

			}
			/* after first printed of the list sep is ", " */
			sep = ", ";
			index++;

		}
	}

	printf("\n");
	va_end(list);

}
