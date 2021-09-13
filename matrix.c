#include <stdio.h>
#include <stdlib.h>
int main()
{
 int i,j, sum=0;
 int r1,c1 , r2, c2;


 printf("---------For First Matrix---------\n\n");
 printf("Enter size of Row: ");
 scanf("%d",&r1);
 printf("\nEnter size of Column: ");
 scanf("%d",&c1);

 int **p1 = (int **) malloc (r1*sizeof(int *));


 for ( i = 0; i < r1; i++)
 {
   p1[i]=(int *) malloc (c1*sizeof(int));
 }
 
 printf("\nNow Enter First %d by %d Matrix Elements:\n",r1,c1);
 for ( i = 0; i < r1; i++)
 {
   for ( j = 0; j < c1; j++)
   {
      scanf("%d",&p1[i][j]);
   } 
 }

 for ( i = 0; i < r1; i++)
 {
   for ( j = 0; j < c1; j++)
   {
      printf("%3d",p1[i][j]);
   } 
   printf("\n");
 }
  
 printf("\n---------For Second Matrix---------\n\n"); 

 printf("Enter size of Row: ");
 scanf("%d",&r2);
 printf("\nEnter size of Column: ");
 scanf("%d",&c2);

 int **p2 = (int **) malloc (r2*sizeof(int *));


 for ( i = 0; i < r2; i++)
 {
   p2[i]=(int *) malloc (c2*sizeof(int));
 }
 
 printf("\nNow Enter Second %d by %d Matrix Elements:\n",r2,c2);
 for ( i = 0; i < r2; i++)
 {
   for ( j = 0; j < c2; j++)
   {
      scanf("%d",&p2[i][j]);
   } 
 }

 for ( i = 0; i < r2; i++)
 {
    for ( j = 0; j < c2; j++)
    {
       printf("%3d",p2[i][j]);
    } 
    printf("\n");
  }
  
  printf("\n");
   
 int **result;

  
  if(c2==r1)
  {
   result =(int **) malloc (r2*sizeof(int *));

   for ( i = 0; i < r2; i++)
   {
    result[i]=(int *) malloc (c2*sizeof(int));
   }

   for ( i = 0; i < r2; i++)
   {
    for (j = 0; j < c2; j++)
    {
      for (int k=0;k < r2;k++ )
      {
        sum += p1[i][k] *  p2[k][j];
      }

      result[i][j] = sum;
      sum=0;
     
    }
   
   }

   for ( i = 0; i < r2; i++)
   {
    for ( j = 0; j < c2; j++)
    {
      printf("%3d",result[i][j]);
      
    }
    printf("\n");
    
   }
  }
  else
  {
   printf("Multiplication is not possible !");
   free(p1);
   free(p2);
   free(result);
  }

  free(p1);
  free(p2);
  free(result);
  p1=NULL;
  p2=NULL;
  result=NULL;


  
 
 
   
  return 0;
}