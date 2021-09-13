#include<stdio.h>        
void Pstar(int,int);       //Function Declared in the Gobal decalration Section
void Ask(int,int);
int main()                //Function with argument and without return value //
{
   int x,y;
   Ask(x,y);
   Ask(x,y);
   Ask(x,y);
}
void Ask(int m,int n)
{
printf("\nEnter the no. of row  :");
scanf("%d",&m);
printf("Enter the no. of column  :");
scanf("%d",&n);
Pstar(m,n);
}

void Pstar(int a,int b)
{
int i,j;
printf("\nThe star pattern with row and column is :\n");  //Function  Definition

for(i=1;i<=a;i++)
{
 for(j=1;j<=b;j++)
 {

  printf("*");
 }
 printf("\n");
} 
}
