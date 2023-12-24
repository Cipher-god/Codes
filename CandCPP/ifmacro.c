#include <stdio.h>
#define x 

int main()
{
  int n,m;
  printf("Enter two no. : ");
  scanf("%d%d",&n,&m);
  
  #if n>m
   printf("FIRST NO. IS GREATER ");
  #endif
  
  return 0;
}