#include "main.h"

/**
 * print_most_numbers - print number without 2 and 4
 */

void print_most_numbers(void)
{
int c = 0;

for (; c <= 9; c++)
{
if (c != 2 && c != 4)
_putchar(c + 48);
}
_putchar(10);
}
