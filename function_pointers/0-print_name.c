#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: a name - string to be printed
 * @f: pointer to function
 * that takes a string
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))

{
	/**
	 * standard prevention from segfaults
	 * return nothing if name or function are NULL
	 */
	if (name == NULL || f == NULL)

		return;

	f(name); /**
		  * function pointer f invokes the function and
		  * its parameter name
		  */

}




