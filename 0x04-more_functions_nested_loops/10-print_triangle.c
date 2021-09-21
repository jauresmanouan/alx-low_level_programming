#include "main.h"

/***/

void print_triangle(int size)
{
  int i = 1;
  
  if (size < 0)
    {
      _putchar(10);
    }
  if (size > 0)
    {
      while (i <= size)
	{
	  int x = 1;
	  
	  for(; x<=size; x++)
	    {
	      _putchar(32);
	    }
	  _putchar('#');
	  _putchar(10);
	  i++;
	}
    }
}
