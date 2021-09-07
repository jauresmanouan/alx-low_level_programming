# include <stdio.h>

/**
 * main - number followed by , and space
 *
 * Return: 0 if true
 *
 */

int main(void)
{

int i;
i = 0;

for (i = 0; i <= 9; i++)
{
putchar(i + 48);
if (i < 9)
{
putchar(44);
putchar(32);
}
}
putchar(10);
return (0);
}
