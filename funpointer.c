#include <stdio.h>

int funp(int a)
{
  return a * a;
}

int main()
{

  int r = 33, sq;

  int (*p)(int) = NULL;
  p = &funp;
  // sq = p(r);   // Two ways to call function
  sq = (*p)(r);   // Using the fucntion pointer
  printf("\n\nThe square of %d is %d\n\n", r, sq);

  return 0;
}