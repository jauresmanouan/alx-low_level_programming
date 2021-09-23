#include "main.h"

/**
 * print_rev - reverse sentence
 * @s : string
 * Return: count
 */

void print_rev(char *s)
{
int l = _strlen(s);

for (; l >= 0; l--)
{
if (*(s + l) == '\0')
l = l - 1;
if (*(s + l) == '\0' && *(s + (l + 1)) == '\0')
break;
_putchar(*(s + l));
}
_putchar(10);
}

/**
 * _strlen - count string
 * @str : string
 * Return: result
 */

int _strlen(char *str)
{
int count = 0;

while (*str != '\0')
{
count++;
str++;
}
return (count);
}
