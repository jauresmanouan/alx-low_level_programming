# include "main.h"

/**
 * _islower - lowercase or not
 * @c : int value
 *Return: 0 if true
 */

int _islower(int c)
{
int i;
for (i = 97; i <= 122; i++)
{
if (c == i)
return (1);
}
return (0);
}
