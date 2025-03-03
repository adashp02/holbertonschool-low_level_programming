#include "main.h"
/**
*cap_string - function that capitalize first character of a word
*@str: string to capitalize
*Return:returns the capitalized string
*/
char *cap_string(char *str)
{
	int count = 0;

	while (str[++count])
	{
		while (!(str[count] >= 'a' && str[count] <= 'z'))
			count++;

		if (str[count - 1] == ' ' ||
				str[count - 1] == '\t' ||
				str[count - 1] == '\n' ||
				str[count - 1] == ',' ||
				str[count - 1] == ';' ||
				str[count - 1] == '.' ||
				str[count - 1] == '!' ||
				str[count - 1] == '?' ||
				str[count - 1] == '"' ||
				str[count - 1] == '(' ||
				str[count - 1] == ')' ||
				str[count - 1] == '{' ||
				str[count - 1] == '}')
			str[count] -= 32;
	}
	return (str);
}
