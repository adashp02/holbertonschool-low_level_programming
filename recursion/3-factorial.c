#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: a given number to be evaluated
 *
 *Return: value of factorial
 */

int factorial(int n)

{
	if (n < 0)

		return (-1);

	if (n == 0)

		return (1);




	return (n * factorial(n - 1));

}
