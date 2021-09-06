# include <stdio.h>

/**
 * main - mirror alphabet
 *
 * Return: 0 if true
 */

int main(void)
{
char l;
int i;

l = 'z';
i = 0;

while (i < 26)
{
putchar(l - i);
i++;
}
putchar(10);
return (0);
}
