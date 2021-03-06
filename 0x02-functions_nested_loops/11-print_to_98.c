# include "main.h"
void compt_98(int n);
void compt_98_3(int n);

/**
 * print_to_98 - printf value until 98
 * @n : value of function
 */
void print_to_98(int n)
{
int x;

for ( ; n > 98; n--)
{
if (n > 99)
compt_98_3(n);
else
compt_98(n);
if (n == 98)
break;
_putchar(44);
_putchar(32);
}

for (; n <= 98; n++)
{
if (n < 0)
{
x = n * -1;
_putchar('-');
if (x > 99)
compt_98_3(x);
else if (x > 9)
compt_98(x);
else
_putchar((x % 10) + 48);
if (n == 98)
break;
_putchar(44);
_putchar(32);
}
if (n >= 0)
{
if (n < 10)
_putchar((n % 10) + 48);
else
compt_98(n);
if (n == 98)
break;
_putchar(44);
_putchar(32);
}
}
_putchar(10);
}


/**
 * compt_98 - compt only for 2 digits numbers
 * @n : value of function
 */

void compt_98(int n)
{
_putchar((n / 10) + 48);
_putchar((n % 10) + 48);
}

/**
 * compt_98_3 - compte for 3 digits numbers
 * @n : value of function
 */
void compt_98_3(int n)
{
_putchar((n / 100) + 48);
_putchar(((n / 10) % 10) + 48);
_putchar((n % 10) + 48);
}
