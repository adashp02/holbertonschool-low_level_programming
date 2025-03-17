#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @size: number of elements in the array
 * @array: an array
 * @cmp: pointer to the function that compares values
 *
 * Return: index of 1st element that cmp
 * does not return 0, if no element match, -1
 * if size less or equal 0, -1
 */

int int_index(int *array, int size, int (*cmp)(int))

{
	int i;

	if (array == NULL || cmp == NULL)

		return (-1);
	{

		for (i = 0; i < size; i++)


		{
			if (cmp(array[i]) != 0)

			return (i);
		}

	}

	return (-1);

}
