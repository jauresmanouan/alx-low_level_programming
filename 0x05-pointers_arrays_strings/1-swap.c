#include <stdio.h>

/**
 * swap_int - interchange value of a and b
 * @a: integer
 * @b: integer
 */

void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
