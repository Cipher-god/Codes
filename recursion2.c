#include <stdio.h>

int Sum(int x)
{
   if(x == 1)
   return 1;

   else
   { 
     x =x + Sum(x-1);
     return x;
   }

} 
int main()
{
   int n;
   printf("Enter a no. : ");
   scanf("%d",&n);

   printf("The Sum of natural no. upto %d is : %d",n,Sum(n));
 
  return 0;
}