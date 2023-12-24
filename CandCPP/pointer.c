#include <stdio.h>       /* The variable that can store variable (&) addresss */
#include <conio.h>                          /*       are called pointer */
#include <stdlib.h>
int main()
{
  int *a,i,n,ins,m;
  a = (int *) malloc ((n+1) * sizeof(int));

  printf("Enter size of Array: ");
  scanf("%d",&n);

  printf("\n\nEnter %d Elements  : ",n);

  for ( i = 0; i < n; i++)
  {
  
    scanf("%d",&a[i]);
  }
  for ( i = 0; i < n; i++)
  {
    printf("%d  ",a[i]);
  }
 
  printf("\nNOw Enter new element to be insert : ");
  scanf("%d",&ins);
  

 for ( i = 0; i < n; i++)
 {
   if(a[i]>ins)
   {
     m=a[i];
     a[i]=ins;
     a[i]=m;
   }
 }
  
  
  for ( i = 0; i <= n; i++)
  {
    printf("%d  ",a[i]);
  }

}