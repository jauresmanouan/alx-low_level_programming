#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str : string
 */

void _puts(char *str)
{
write(1, str, _strlen(str));
_putchar(10);
}

/**
 * _strlen - count number of strings
 * @str: string
 * Return: numeber of string
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
