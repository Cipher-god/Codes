#include <stdio.h>
#include <stdlib.h>
struct customarr
{
   int total_size;
   int used_size;
   int *ptr; // this will no longer wild pointer
};

void createArr(struct customarr *a, int t_size, int u_size)
{
    // (*a).total_size = t_size; <---  can also be written as

    a->total_size = t_size;
    a->used_size = u_size;
    a->ptr = (int *) malloc (t_size * sizeof(int));
    printf("size of marks customarr : %d\n",sizeof(a->ptr));
}

void setvalues(struct customarr *a )
{
   for ( int i = 0; i < a->used_size; i++)
   {
       printf("Enter element %d : ",i);
       scanf("%d",&(a->ptr)[i]);
   }
   
}

void Display(struct customarr *a )
{
    for (int i = 0; i < a->used_size; i++)
    {
        printf("\n%d",a->ptr[i]);
    }
    
}

int main()
{
  struct customarr marks;
  createArr(&marks, 10, 4);
  setvalues(&marks);
  Display(&marks);

 
  return 0;
}