#include <stdio.h>

/**
 * main - display the alphabet
 *
 * Return: 0 always success
*/
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
putchar(10);
return (0);
}


