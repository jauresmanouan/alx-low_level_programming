#include "main.h"

/**
 * string_toupper - capitalzes each characters if lowercase
 * @s: words to check
 * Return: s
 **/

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
		i++;
	}
	return (s);
}
