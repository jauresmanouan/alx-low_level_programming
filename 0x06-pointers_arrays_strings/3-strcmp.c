#include "main.h"

/**
 *_strcmp- count char
 *@s1: first char
 *@s2: second char
 *Return: difference between both unsigned char
 */

int _strcmp(char *s1, char *s2)
{
while (*s1)
{
if (*s1 != *s2)
break;
s1++;
s2++;
}
return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
