#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: first integer in array
 * @max: last integer
 *
 * Return: pointer to the array
 */

int *array_range(int min, int max)

{
	int i;
	int j = 0;
	int *array;

	if (min > max)

		return (NULL);

	array = malloc((max - min + 1) * sizeof(int));

		if (array == NULL)

		return (NULL);

	{

		for (i = min; i <= max; i++)

		{

			array[j] = i;


			j++;

		}

		return (array);
	}

	return (NULL);

}
