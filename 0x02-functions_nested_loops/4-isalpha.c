# include "main.h"

/**
 * _isalpha - check if is lowercase or uppercase
 *
 * @c : accet ASCII value
 *
 * Return: with 1 if is lowercase or uppercase and 0 if not
 */

int _isalpha(int c)
{
int i;
for (i = 97; i <= 122; i++)
{
if (c == i)
return (1);
}
for (i = 65; i <= 90; i++)
{
if (c == i)
return (1);
}
return (0);
}
