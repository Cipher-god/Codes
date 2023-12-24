//Program of finding second largest no. in Array using Pointer //

#include<stdio.h>
int main()
{
 int a[10],i,j,n;
 int *p;
 p=a;

 printf("Enter 10 elements of array : \n");
 for ( i = 0,j=0; i < 20; i++)
{
  if(i<10)
  scanf("%d",(p+i));
  else
  { 
    printf("%3d",*(p+j));
    j++;
  }
}

 
for ( i = 0; i < 10; i++)
{
  for ( j = i+1 ; j < 10; j++)
  {
    if (*(p+j)>*(p+i))
    {  
    n=*(p+i);
    *(p+i)=*(p+j); 
    *(p+j)=n;
    }
  }
  
}
printf("\nThe Second LArgest no. From above no. is : %d",*(p+1));

}