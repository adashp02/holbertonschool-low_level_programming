#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	/* variable dig for a single digit*/
	int dig = 0;
	int end_dig = 9;

	/* ch for a character*/
	int ch = 'a';
	int end_ch = 'f';
	/* first condition is digits 0-9*/
	while (dig <= end_dig)
	{
		/* to print chars with putchar use ascii '48 +' syntax*/
		putchar(48 + dig);

		dig++;

	}
	/* we need a-f chars for the base 16 on top of 0-9*/
	while (ch <= end_ch)

	{
		putchar(ch);

		ch++;

	}
	printf("\n");

	return (0);
}
