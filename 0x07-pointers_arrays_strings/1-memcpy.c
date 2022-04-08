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
	int i = 0;
	char *csrc = (char *)src;
	char *cdest = (char *)dest;

	for (i; i < n; i++)
		cdest[i] = csrc[i];

	return (dest);
}
