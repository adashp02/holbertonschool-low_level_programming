#include "main.h"
#include <stdio.h>

/**
 * main - prints numbers 1 -100
 * for each mulltiple of 3 prints "Fizz"
 * for multiple of 5 - "Buzz"
 * for both - "FizzBuzz"
 * Return: 0 for success
 */

int main(void)
{

	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (n % 5 == 0 && n % 3 != 0)

		{
			printf(" Buzz");
		}
		else if (n % 3 == 0 && n % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (n == 1)
		{
			printf("%d", n);
		}
		else
		{
			printf(" %d", n);
		}
	}

	printf("\n");

	return (0);

}
