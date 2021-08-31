#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - if conditions
 * Return: 0 if all is good
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
printf("%i is positif \n", n);
else
if (n < 0)
printf("%i is negatif \n", n);
else
printf("%i is zero\n", n);
return (0);
}
