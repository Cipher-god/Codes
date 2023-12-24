#include <stdio.h>

int Sum(int a, int b)
{
    return (a+b);
}

int main()
{
  int (*fptr)(int,int);
  fptr = Sum;
  printf("%d",fptr(10,6));
 
  return 0;
}