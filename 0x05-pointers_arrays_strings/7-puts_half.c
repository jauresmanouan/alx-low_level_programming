#include "main.h"

int string_leng(char *l);

/**
 * puts_half - write the second half of a character
 * @str: string variable
 */

void puts_half(char *str)
{
int length, mid;

length = string_leng(str);

mid = length / 2;

if (length % 2 == 1)
{
mid++;
}
for (mid; mid < length; mid++)
{
_putchar(*(str + mid));

if (*(str + mid) == '\0')
break;
}
_putchar(10);
}

/**
 * string_leng - count the number of string
 * @l: variable
 * Return: result
 */

int string_leng(char *l)
{
int c;

while (*(l + c) != '\0')
c++;
return (c);
}
