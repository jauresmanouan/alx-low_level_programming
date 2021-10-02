#include "main.h"

/**
 * print_triangle - display triangle
 *@size: give the size
 */

void print_triangle(int size)
{
int i = 0, x = size;
if (size <= 0)
{
_putchar(10);
return;
}
int y = 0, j = 0;
for (; x >= i;)
{
if (x > 1 && x != 1)
_putchar('.');
i++;
if ((i + 1) == x)
{
j = size - i;
y = 0;
for (; y < j; y++)
_putchar(35);
i = 0;
x = size - y;
_putchar(10);
}

if (x == 1)
{
for (i = 0; i < size; i++)
_putchar(35);
_putchar(10);
return;
}
}
}
