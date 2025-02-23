#include "main.h"

/**
 * _isalpha - checks if character is a letter lowercase or capital
 * @c: the character to check
 * Return: 1 if c is lowercase or capital letter, 0 otherwise
 */

int _isalpha(int c)

{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));

}
