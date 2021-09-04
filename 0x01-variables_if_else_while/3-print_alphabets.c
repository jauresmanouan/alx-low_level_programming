# include <stdio.h>
/**
 * main - lower and uppercase
 *
 * Return: 0 if is good
 *
 */

int main(void)
{
char lower, upper, c;
for (lower = 'a'; lower <= 'z'; lower++)
putchar(lower);
for (upper = 'A'; upper <= 'Z'; upper++)
putchar(upper);
putchar(10);

return (0);
}
