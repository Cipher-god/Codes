#include <stdio.h>
#include <stdlib.h>
struct stack_linklist
{
    int data;
    struct stack_linklist *link;
};
typedef struct stack_linklist NODE;
NODE *Push(NODE *start, int data)
{
  NODE *temp = NULL;
  temp = (NODE *)malloc(sizeof(NODE));
  temp->data = data;
  temp->link = start;
  start = temp;
  return start;
}
NODE *POP(NODE *start)
{
  if(start == NULL)
  {
    printf("Not possible !(Queue Underflow)");
    return start;
  }
  NODE *temp = start;
  printf("Popped element is : %d",start->data);
  start = start->link;
  free(temp);
  temp = NULL;
  return start;
}
void Display(NODE *start)
{
   NODE *p = start;
   printf("Stack: ");
   while (p != NULL)
   {
     printf("%d\t",p->data);
     p= p->link;
   }
}
int main()
{ 
    NODE *start = NULL;
    int choice , data;
    while (1)
    {
       printf("\nPress: \n");
       printf("1. to Pust or insert element in stack\n");
       printf("2. to Pop  or delete element in stack\n");
       printf("3. to Display stack elements\n");
       printf("4. to end the program (EXIT) !\n");
       scanf("%d", &choice);
       switch (choice)
       {
          case 1:printf("Enter element : ");
          scanf("%d",&data);
          start = Push(start,data);
          break;

          case 2:start = POP(start);
          break;
          
          case 3:Display(start);
          break;
          
          case 4:exit(0);
          default:printf("Invalid Choice (Try Again) !");
          break;
       }
    }
    


    return 0;
}