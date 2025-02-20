#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	/* Declare a variable as [a - z] */

	char low_case = 'a';

	char upper_case = 'A';

	/* If the value is less then or equal z - print it */

	while (low_case <= 'z')

	{
		putchar(low_case);
		low_case++;
	}
	while (upper_case <= 'Z')

	{
		putchar(upper_case);
		upper_case++;

	}

	putchar('\n');

	return (0);

}
