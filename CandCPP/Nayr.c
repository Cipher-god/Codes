/* Function without argument with   Return Value  */
#include<stdio.h>
int Divide(void);                //Function declared in the Global Declaration//
int main()
{
   int n,m;
   n=Divide();
   printf("The Divison   is %d",n);

   m=Divide();
   printf("The Divison   is %d",m);

}
int Divide()
{
int a,b;

printf("\n\nEnter Dividend and divisor  :");
scanf("%d/%d",&a,&b);

return a/b;
}