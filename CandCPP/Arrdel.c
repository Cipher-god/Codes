#include <stdio.h>
#define D 5
int main()              //Array Deletion//
{
int a[D],i,n,m=0;

printf("- - - - - - - - Deletion of the Array - - - - - - - - - \n\n");
printf("Enter 5 elements of Array: ");
for ( i = 0; i < D; i++)
{
    scanf("%d",&a[i]);
}
printf("\nNow Enter which element you want to delete: ");
scanf("%d",&n);




for ( i = 0; i < D; i++)
if (n==a[i])
{printf("The New Array is :\n");
 for ( i = 0; i < D; i++)
 {
     if(n==a[i]){
     a[i]=0;
     continue;}
     printf("%d\n",a[i]);
 }

}
else m++;
if (m>4)
{
    printf("%d Not Found",n);
}

getchar();
getchar();
return 0;
}