#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of the two diags of a square matrix of integers
 * @a: matrice
 * @size: matrice size
 */

void print_diagsums(int *a, int size)
{
	int i, sum, sizer;

	i = 0;
	sum = 0;
	sizer = size * size;

	while (i < sizer)
	{
		if (i % (size + 1) == 0)
			sum = sum + a[i];
		i++;
	}
	printf("%d, ", sum);

	sum = 0;
	i = 0;

	while (i < sizer)
	{
		if (i % (size - 1) == 0 && i != (sizer - 1) && i != 0)
			sum = sum + a[i];
		i++;
	}
	printf("%d\n", sum);
}
