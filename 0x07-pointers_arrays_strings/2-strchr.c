#include "main.h"

/**
 * _strchr - locate character in a string
 * @s: string
 * @c: character
 * Return: the locate character
 */

char *_strchr(char *s, char c)
{
	char *p = s;

	int i = 0;

	while (*s != c)
	{
		++s;
		++i;
	}
	if (*s == c)
	{
		return (p + i);
	}
	else
	{
		return (0);
	}
}
