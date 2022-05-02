#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - A function that allocates memory using malloc
 * @b: variable
 * Return: Pointer
 */


void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
