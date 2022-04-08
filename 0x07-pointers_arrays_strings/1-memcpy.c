#include "main.h"

/**
 * _memcpy - copy a block of data from a src address to a dest address.
 * @dest: destination
 * @src: source
 * @n: Number of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = *src;
		src++;
	}
	return (dest);
}
