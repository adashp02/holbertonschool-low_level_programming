#include "main.h"

/**
 * islower function checks for lowercase character
 *
 * @c: the character to check
 *
 * return: int - 1 if c is in lowercase, 0 otherwise
 */

int _islower(char c)

{
	return (c >= 'a' && c <= 'z');

}
