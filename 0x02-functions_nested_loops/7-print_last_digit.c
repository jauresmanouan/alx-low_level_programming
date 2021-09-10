#include "main.h"

/**
 * print_last_digit - modulo
 * @i: value
 * Return: the last digit
 */
int print_last_digit(int i)
{
int a;

a = i % 10;

if (a < 0)
a *= -1;

_putchar(a + 48);
}
