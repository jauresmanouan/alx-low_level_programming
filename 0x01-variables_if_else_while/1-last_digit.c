#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - loops
 * Return: 0 if all is good
*/

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;

if (n % 10 > 5)
printf("Last digit of %i is %i and is greater than 5\n", n, n % 10);
else
if (n % 10 < 6)
printf("Last digit of %i is %i and is less than 6\n", n, n % 10);
else
printf("Last digit of %i is %i and is zero\n", n, n % 10);
return (0);
}
