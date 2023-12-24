#include <stdio.h>

void setVal(int arr[], int index, int value)
{
  arr[index] = value;
}
int main()
{
  int array[5],n,  i; 
  for ( i = 0; i < 5; i++)
  {
    printf("Enter value at %d ",i);
    scanf("%d",&n);
    setVal(array,i, n);
  }
  for ( i = 0; i < 5; i++)
  {
    printf("\nValue at %d is : %d",i,array[i]);
  }

  return 0;
}