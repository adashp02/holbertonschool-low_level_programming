#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - converts strings into integers
 * using atoi function
 * and handles wrong input
 * @argc: the number of arguments passed into the program
 * @argv: array of arguments as strings
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[])

{
	int num1, num2;

	char *op;

	int (*getop)(int, int);

	/* so if any other number of args - print Error and code 98 */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* there are 4 arguments including the name of prog calc */
	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);
	getop = get_op_func(op);

	/* if the operator passed by get_op_func is null */
	if (getop == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	/* if the input is "divide or modulo by 0" - code 100 */
	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", getop(num1, num2));

	return (0);

}
