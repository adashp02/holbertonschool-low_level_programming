#include "main.h"

/**
 * _atoi - converts a string into an integer value
 * which is a number
 * @s: string to be converted
 * Return: the int converted from the string
 */

int _atoi(char *s)

{
	int check = 0; /* first checking for numbers */
	unsigned int found = 0; /* result in finding the integer value */
	int sign = 1; /* sign of the integer - or + */
	int non_digit = 0;

	/* running the check looking for numbers */
	while (s[check] != '\0')

	{
		if (s[check] == '-') /* checking for negative numbers */
		{
			sign = sign * -1;

		}
		else if (s[check] >= '0' && s[check] <= '9') /* checking for 0 - 9 numbers */

		{
			non_digit = 1; /* if the first number is found */

			found = found * 10 + (s[check] - '0');
			/* converting character into integer */
		}
		else if (non_digit)
		{
			non_digit = 2; /* if non number found function breaks */
		}
		if (non_digit == 2)

		{
		return (found * sign);
		}
	check++;

	}

	return (found * sign);

}
