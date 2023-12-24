#include <stdio.h>

int Maxelement(int array[5]){
    int max = 0; // local var of Maxelement function
    for (int i = 0; i < 5; i++)
    {
        if(array[i] > max)
        max = array[i];
    }
    return max;
}

int Minelement(int array[5]){
  
  int min = array[0],i;
  for ( i = 0; i < 5; i++)
  {
    if(array[i] < min)
    min = array[i];
  }
  
  return min;
}

int main()
{
  int arr[] = {11,4,23,7,31}, i, max = 0, min = 0;
  min  = Minelement(arr); // local var of main function
  
  printf("The min element is %d",min);
 
  return 0;
}