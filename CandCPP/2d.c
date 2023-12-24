#include<stdio.h>
int main()
{
int a[3][3],b[3][3],i,j;

printf("- - - - - - - - - - - Array of 2D - - - - -- - - - - -  -\n\n");
printf("Enter a 2D elements : \n");
for ( i = 0; i < 3; i++)
{
    for ( j = 0; j < 3; j++)
    {
        scanf("%d",&a[i][j]);
    }
    
}

printf("Enter b 2D elements : \n");
for ( i = 0; i < 3; i++)
{
    for ( j = 0; j < 3; j++)
    {
        scanf("%d",&b[i][j]);
    }
    
}


printf("The a 2D elements : \n");
for ( i = 0; i < 3; i++)
{
    for ( j = 0; j < 3; j++)
    {
        printf(" %d",a[i][j]);
    }
    printf("\n");
}
printf("\n");
printf("The b 2D elements : \n");
for ( i = 0; i < 3; i++)
{
    for ( j = 0; j < 3; j++)
    {
        printf(" %d",b[i][j]);
    }
    printf("\n");
}

 getchar();
 getchar();
 return 0;

}