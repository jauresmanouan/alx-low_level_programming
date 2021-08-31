#include <stdio.h>
#include <math.h>

int main (void)
{
  int n, m;
  printf("Entrer un nombre\n");
  scanf("%i",&n);
  
  m = n%10;

  printf("Le modulo de %i est %i\n", n, m);
  return(0);
}
