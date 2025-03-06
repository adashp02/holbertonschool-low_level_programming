#include "main.h"

/**
 * _puts_recursion - prints a string in a recursive mode
 * @s: string to be printed out
 *
 *
 *
 */

void _puts_recursion(char *s)

{
	if (*s != '\0')
	/* if pointer not on null */
	{
		_putchar(*s);

		/* then print the first char on pointer */

		_puts_recursion(s + 1);

		/* then if still not null - keep printed every next char */

	}

	else

	{
		_putchar('\n');

	}


}


