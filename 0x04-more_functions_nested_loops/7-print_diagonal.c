#include "main.h"

/**
 * print_diagonal - use "\" to print diagonale
 * @n: number of times
 */

void print_diagonal(int n)
{
int i = 0;

if (n <= 0)
{
_putchar(10);
return;
}

while (i <= n)
{
if (i > 0)
{
int k = 1;

for ( ; k < i ; k++)
_putchar(32);
_putchar(92);
_putchar(10);
}
i++;
}
}
