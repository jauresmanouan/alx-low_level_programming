#include "main.h"

/**
 * _isdigit - check the nature of value digit or not
 * @c: value
 * Return: 1 if is digit and 0 if not
 */

int _isdigit(int c)
{
int i;

for (i = 0; i <= 9; i++)
{
if (c == i + 48)
return (1);
else
return (0);
}
}
