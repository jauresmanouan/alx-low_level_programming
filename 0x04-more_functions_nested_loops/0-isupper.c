#include "main.h"

/**
 * _isupper - check the nature of a letter (lower and upper)
 * @c: give a letter
 * Return: 1 if upper and 0 if not
 */


int _isupper(int c)
{

if (c >= 97 && c <= 102)
return (0);

if (c >= 65 && c <= 97)
return (1);
}
