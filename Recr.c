#include <stdio.h>
int n1(int);
int main()
{
    int x,y;
    printf("Enter a   no.  :  ");
    scanf("%d",&x);

    y=n1(x);

    
}
int n1(int a)
{
int b;
 
if(a==1)
return printf("%d",a);

b=a-1*n1(a-1);
printf("\n%d",b);
return b;

}