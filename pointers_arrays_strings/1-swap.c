#include "main.h"


/**
 * swap_int - swapping values of int by swapping theit pointers
 * @a: integer to be swapped
 * @b: integer to be swapped
 * need an extra int c to "store" the value of int a
 * this extra int is like a temporary storage
 * or "mediator" while swapping
 */

void swap_int(int *a, int *b)

{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}
