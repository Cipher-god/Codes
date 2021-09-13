#include <stdio.h>
#include <stdlib.h>
int main()
{
  int i;
  int *p;

  for ( i = 0; i < 3000; i++)
  {
     printf("Karan Nayak aka ACTOR \n");
      
     if(i%50 == 0) 
     {
         getchar();
     }
     p = malloc (200* sizeof(int));
     free(p);
  }
  
    
 return 0;
}