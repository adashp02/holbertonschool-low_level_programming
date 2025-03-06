#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * in a recursive mode
 * @s: string to be printed out
 *
 *
 *
 */

void _print_rev_recursion(char *s)

{
	if (*s != '\0')
	/* if pointer not on null */
	{
		_print_rev_recursion(s + 1);

		/* just go in reverse to the previous script */

		_putchar(*s);

	}

}
