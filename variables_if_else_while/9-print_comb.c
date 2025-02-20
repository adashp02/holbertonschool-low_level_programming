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

	/* first condition is digits 0-9*/
	while (dig <= end_dig)
	{
		/* to print chars with putchar use ascii '48 +' syntax*/
		putchar(48 + dig);

		if (dig < end_dig)
		{
		putchar(',');
		putchar(' ');
		}

		dig++;

	}

	printf("\n");

	return (0);
}
