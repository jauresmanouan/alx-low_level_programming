#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str : string
 */

void _puts(char *str)
{
int i;

for (i = 0; i < 1; i++)
{
while (*str != '\0')
{
write(1, str, _strlen(str));
_putchar(10);
break;
}
}
}
