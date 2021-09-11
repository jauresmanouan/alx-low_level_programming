# include "main.h"

/**
 * jack_bauer - display times according "24-Chrono"
 */

void jack_bauer(void)
{
int h, m;

h = 0;
m = 0;

for (h = 0; h < 24; h++)
{
for (m = 0; m <= 59; m++)
{
_putchar((h / 10) + 48);
_putchar((h % 10) + 48);
_putchar(58);
_putchar((m / 10) + 48);
_putchar((m % 10) + 48);
_putchar(10);
}
}
}
