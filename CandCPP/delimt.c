#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;

printf("Enter a operater than no. with operater : ");
scanf("%c",&c);
if(c=='-')
{
scanf("%d-%d",&a,&b);
printf("The Off is  %d",a-b);
}
else if(c=='*')
{
scanf("%d*%d",&a,&b);
printf("The product is  %d",a*b);
}
else if(c=='+')
{
  scanf("%d+%d",&a,&b);
  printf("The Sum is  %d",a+b);
}
else if (c=='/')
{
  scanf("%d/%d",&a,&b);
  printf("The Divison is %d",a/b);
}
else
{
  printf("\nSOrry! Only  Arithematic Operations Supported\nNExt Time Please Enter Arithematica Symbol");
}
getch();

}