#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)

{
	int i;
	int tmp;

	for (i = 0; i < n--; i++)

	{
		tmp = a[i];

		a[i] = a[n];

		a[n] = tmp;

	}

}


