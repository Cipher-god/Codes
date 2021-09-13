#include <stdio.h>
int main()
{
   int i, j, sum = 0;
   int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};

   for ( i = 0; i < 3; i++)
   {
       for ( j = 0; j < 3; j++)
       {
           printf("%2d",a[i][j]);
       }
      printf("\n") ;
   }
   printf("\nUpper triangle elements: ");

   printf("\n");
   for ( i = 0; i < 2; i++)
   {
       for ( j = 0; j < 3; j++)
       {
            if(j > i)
           {
           printf("%2d",a[i][j]);
           sum += a[i][j];
           }
       }
       printf("\n") ;
   }
   printf("\nAnd here is the sum : %d",sum);
   
   sum = 0;
   printf("\n\nLower triangle elements: ");

   printf("\n");
   for ( i = 1; i < 3; i++)
   {
       for ( j = 0; j < 2; j++)
       {
           if(i > j)
           {
           printf("%2d",a[i][j]);
           sum += a[i][j];
           }
       }
       printf("\n") ;
   }
   printf("\nAnd here is the sum : %d",sum);

   
   

 
  return 0;
}