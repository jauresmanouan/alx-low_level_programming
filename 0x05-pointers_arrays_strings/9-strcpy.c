#include "main.h"

/**
 * _strcpy - copy string content
 * @dest: destination
 * @src: source
 * Return: the value
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;
	
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	
	return (start);
}
