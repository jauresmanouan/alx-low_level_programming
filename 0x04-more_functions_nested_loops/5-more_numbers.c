#include "main.h"

/**
 * more_numbers - print 10 times numbers 0 to 14
 */

void more_numbers(void)
{
int c, i = 0;

while (i < 10)
{
for (c = 0; c <= 14; )
{
_putchar((c % 10) + 48);
c++;
if (c > 9 && c <= 14)
{
_putchar((c / 10) + 48);
}
}
_putchar(10);
i++;
}
}
