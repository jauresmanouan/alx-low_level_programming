#include "main.h"

/**
 * _strlen - count the number of string variable
 * @s : string
 * Return: number of string
 */

int _strlen(char *s)
{
int i = 0;

while (*s != '\0')
{
i++;
s++;
}
return(i);
}
