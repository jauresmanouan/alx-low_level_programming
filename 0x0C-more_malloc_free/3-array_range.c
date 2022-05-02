#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 * @min: first variable
 * @max: second variable
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *p, arr = 0;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * (max - min + 1));

	if (p == NULL)
		return (NULL);

	while (min <= max)
	{
		p[arr] = min;
		min++;
		arr++;
	}
	return (p);
}
