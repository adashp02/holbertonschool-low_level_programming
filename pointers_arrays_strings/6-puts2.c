#include "main.h"

/**
 * puts2 - prints every second digit in a string of numbers
 * starting from 0
 * @str: a string to be manipulated
 */

void puts2(char *str)

{
	int count = 0;
	int i;

	while (str[count] != '\0')

	{
	count++;
	}

	i = 0;

	while (i < count)


	{

	_putchar(str[i]);
	/* increment by 2 */
	i += 2;
	}

	_putchar('\n');

}
