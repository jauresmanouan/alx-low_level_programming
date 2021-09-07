#include <stdio.h>

/**
 * main - write _putchar
 *
 * Return: 0 if all is good
 *
 */

int main(void)
{
char c[] = {'_',  'p', 'u', 't', 'c', 'h', 'a', 'r'};
int i = 0;

for (i = 0; i <= 8; i++)
{
putchar(c[i]);
}
putchar(10);
return (0);
}
