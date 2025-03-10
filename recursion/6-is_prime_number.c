#include "main.h"

int prime_recursive(int n, int i);

/**
 * is_prime_number - checks if a number is a prime one
 * @n: number to be checked
 *
 * Return: 1 if its prime, 0 if not
 */

int is_prime_number(int n)

{
	int i = n / 2;

	if (n <= 1)

		return (0);

	return (prime_recursive(n, i));


}

/**
 * prime_recursive - our helper function
 * checks recursively how to define the prime number
 * this function will be called by the above one
 *@n: number being checked
 *@i: iterator
 * Return: 1 if prime, 0 if not
 */

int prime_recursive(int n, int i)

{
	if (i <= 1)

		return (1);

	else if (n % i == 0)

		return (0);

	return (prime_recursive(n, i - 1));

}
