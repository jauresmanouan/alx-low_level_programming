# include "main.h"

/**
 * times_table - siplaytimes table until 9
 */

void times_table(void)
{

int m, n, tab;
tab = 0;

for (m = 0; m <= 9; m++)
{
for (n = 0; n <= 9; n++)
{
tab = m * n;
if ((tab / 10) == 0)
{
_putchar(32);
_putchar((tab % 10) + 48);
}
else
{
_putchar((tab / 10) + 48);
_putchar((tab % 10) + 48);
}

if (n == 8)
break;
_putchar(44);
_putchar(32);
}
_putchar(10);
}
}
