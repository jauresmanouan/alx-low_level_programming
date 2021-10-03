#include "main.h"

int string_l(char *pointer);

/**
 * rev_string - to reverse a string
 * @s: the string that we want to reverse
 */

void rev_string(char *s)
{
int length, c;

char *begin, *end, temp;

length = string_l(s);
begin = s;
end = s;

for (c = 0; c < length - 1; c++)
end++;

for (c = 0; c < length / 2; c++)
{
temp = *end;
*end = *begin;
*begin = temp;

begin++;
end--;
}
}

/**
 * string_l - return the number of string
 * @pointer: receive a pointer as parameter
 * Return: number of string
 */

int string_l(char *pointer)
{
int c = 0;

while (*(pointer + c) != '\0')
c++;

return (c);
}
