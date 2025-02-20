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

	/* If the value is not z plus 1 */

	while (ch != 'z' + 1)

	{
	/* and the value is not q and e - print it */

		if (ch != 'q' && ch != 'e')
		{
		putchar(ch);
		}
	/* increment the value by 1 (a to b etc.) */

		ch++;

	}

	putchar('\n');

	return (0);

}
