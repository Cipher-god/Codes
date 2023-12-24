#include <stdio.h>
int main()
{
  int n, sum = 0;
  printf("Enter no. that you want sum of : ");
  scanf("%d",&n);

// Linear timing for every differt n number
//   int i;
//   for ( i = 0; i <= n; i++)
//   {
//      sum+=i;
//   }
  
//Constant timing for all n number
  sum = (n*n + n)/2;
  printf("The sum of %d is   %d ",n,sum);
 
  return 0;
}