# include <stdio.h>

/**
 * main - mirror alphabet
 *
 * Return: 0 if true
 */

int main(void)
{
char l;
l = 'z';
int i;
i = 0;
while (i < 26)
{
putchar(l - i);
i++;
}
putchar(10);
return (0);
}
