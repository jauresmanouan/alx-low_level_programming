#include<stdio.h>
/**
 * main - display size of each variables
 *
 * Return: 0 if all is good 
 */

int main(void)
{
char c;
int i;
long int li;
long long int lli;
float f;

printf("Size of a char: %lu.", (unsigned long)sizeof(c));
printf("Size of a int: %lu.\n", (unsigned long)sizeof(i));
printf("Size of a long int: %lu.\n", (unsigned long)sizeof(li));
printf("Size of a long long int: %lu.\n", (unsigned long)sizeof(lli));
printf("Size of a float: %lu.\n", (unsigned long)sizeof(f));
return (0);
}
