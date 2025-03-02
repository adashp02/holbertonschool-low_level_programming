#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: the string to be manipulated on
 * Return: void
 */

void puts_half(char *str)

{
	int len = _strlen(str);

	if (len % 2 == 0)
	len = len / 2;

	else
	len = (len + 1) / 2;

	while (str[len] != '\0')

	{
		_putchar(str[len]);
		len++;

	}

	_putchar('\n');

}


/**
 * _strlen - counts chars in a string
 * @s: a string to check the amount of chars in
 * Return: length of the string (amount of chars)
 */

int _strlen(char *s)

{
	int length = 0;

	while (s[length] != '\0')

	{
	length++;
	}

	return (length);

}
