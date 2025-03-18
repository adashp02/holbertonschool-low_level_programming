#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - returns a pointer to the function
 * that corresponds to the operator given as a parameter
 * Example: get_op_func("+") should return
 * a pointer to the function op_add
 * @s: operator passed as arg to the program
 *
 * Return: pointer to corresponding function
 * depending on the operator supplied to the program
 */

int (*get_op_func(char *s))(int, int)

{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};

	int i = 0;

	/**
	 * The op field in the ops array is part
	 * of the op_t structure that associates
	 * a string representation of an operator
	 *  with a corresponding function that performs the operation
	 */
	while (ops[i].op != NULL)

	{
		/* strcmp compares strings and returns 0 if they match */
		if (strcmp(ops[i].op, s) == 0)
		{
			/* if a match is found - return the function pointer */
			return (ops[i].f);
		}
		i++;
	}

	return (NULL);

}
