#include "main.h"

int string_l(char *pointer);

/**
 * puts2 - variable to take the
 *@str: variable
 */

void puts2(char *str)
{
int l, c;

l = string_l(str);
for (c = 0; c <= l; c++)
{

if (c % 2 == 0)
_putchar(*(str + c));
}
_putchar(10);
}

/**
 * string_l - return the number of string
 * @pointer: receive a pointer as parameter
 * Return: number of string
 */

int string_l(char *pointer)
{
int p;

while (*(pointer + p) != '\0')
p++;
return (p);
}
