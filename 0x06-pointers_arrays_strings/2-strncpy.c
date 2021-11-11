#include "main.h"

/**
 * _strncpy - copy function
 * @dest: destination
 * @src: source
 * @n: integer
 * Return: prt
 */

char *_strncpy(char *dest, char *src, int n)
{
	int cnt = 0;

	if ((src[cnt] == 0) && (n > 0))
	{
		for (; cnt < n; cnt++)
			dest[cnt] = 0;
		return (dest);
	}

	while (src[cnt] != 0)
		cnt++;

	if ((n < cnt) && !(n <= 0))
	{
		cnt = 0;
		for (; cnt < n; cnt++)
			dest[cnt] = src[cnt];
	}
	else if (n > cnt && !(n <= 0))
	{
		cnt = 0;
		for (; src[cnt] != 0; cnt++)
			dest[cnt] = src[cnt];
		for (; cnt < n; cnt++)
		dest[cnt] = 0;

	}

	return (dest);
}
