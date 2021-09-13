#include <stdio.h>
#include <stdlib.h>

int main()
{
  void *ptr =NULL;
  int i = 35;
  
  ptr = &i;
  printf("%d",*(int*)ptr);
  
  
  return 0;
}