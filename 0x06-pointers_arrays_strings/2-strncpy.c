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
if (dest == 0)
return (0);

char *ptr = dest;

while (*src && n--)
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';

return (ptr);
}
