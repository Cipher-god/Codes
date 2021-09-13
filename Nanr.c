#include<stdio.h>
#include<conio.h>
void isPostive(void);
void isPositive() 
{                                 
int a;                        

printf("\n\nEnter a no.  :");    
scanf("%d",&a);

if (a>0)                         /*Function           Defination*/
{
   printf("\nThe no. is postive");
}
else
{
  printf("\nThe no. is negative");  
}

}

int main()                //Function with no argument and without return value
{    
                    
isPositive();             //Function call        
isPositive();
isPositive();
}




