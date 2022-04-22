#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number
 * Return: factorial
 */

int factorial(int n)
{
	int c;

	c = 0;

	if (n < 0)
		return (-1);
	else if (n < 2)
		return (1);
	else
		return (n * factorial(n - 1));
}
