# include <stdio.h>

/**
 * main - lower case without e and q
 *
 * Return: 0 if all is good
 *
 */

int main(void)
{
char l;
l = 'a';
while (l <= 'z')
{
if (l != 'e' && l != 'q')
{
putchar(l);
}
l++;
}
putchar(10);
return (0);
}
