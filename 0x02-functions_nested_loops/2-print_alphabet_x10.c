# include "main.h"

/**
 * print_alphabet_x10 - print alphabet in lowercase times 10
 */

void print_alphabet_x10(void)
{
int i, u;
i = 0;

while (i <= 10)
{
for (u = 97; u <= 122; u++)
{
_putchar(u);
}
i++;
_putchar(10);
}
}
