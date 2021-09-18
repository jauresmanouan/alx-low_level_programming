#include "main.h"

/**
 * _isdigit - check the nature of value digit or not
 * @c: value
 * Return: 1 if is digit and 0 if not
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
