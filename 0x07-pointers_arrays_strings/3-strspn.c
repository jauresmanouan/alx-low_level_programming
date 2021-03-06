#include "main.h"

/**
 * _strspn - scan string and returns the length of s which are part of accept.
 * @s:string
 * @accept: accept string
 * Return: lenght
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, lenght;

	i = 0;
	lenght = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{	lenght++;
				break;
			}
			j++;
		}

		if (accept[j] == '\0')
			break;
		i++;
	}
	return (lenght);
}
