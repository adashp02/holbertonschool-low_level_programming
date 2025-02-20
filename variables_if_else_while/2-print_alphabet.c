#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	/* Declare a variable as [a - z] */

	char ch = 'a';

	/* If the value is less then or equal z - print it */

	while (ch <= 'z')

	{
		putchar(ch);
	/* increment the value by 1 (a to b etc.) */
		ch++;

	}

	putchar('\n');

	return(0);

}
		
