#include "main.h"

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: number
 * Return: value
 */

int _sqrt_recursion(int n)
{
	return (hlp(n, 1));
}

/**
 * hlp - helper function to solve _sqrt_recursion
 * @c: number to determine if square root
 * @i: incrementer to compare against `c`
 * Return: square root if natural square root, or -1 if none found
 */

int hlp(int c, int i)
{
	int square;

	square = i * i;
	if (square == c)
		return (i);
	else if (square < c)
		return (hlp(c, i + 1));
	else
		return (-1);
}
