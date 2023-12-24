#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int top = -1;

void Push_element(int stack[ ], int element)
{
    if (top == MAX - 1)
    {
     printf("Not possibe (Stack is over flow) !");
    }
    else
    {
        top++;
        stack[top] = element;
    }
}
void Pop_element(int stack[ ])
{   
    if(top == -1)
    {
      printf("Not possibe (Stack is under flow) !");
    }
    else{
    printf("Popped element is %d", stack[top]);
    top--;}
}
void Display(int stack[ ])
{
    if (top >= 0)
    {   int i =top;
        printf("Stack:\n");
        while (i>=0)
        {
           printf("%d\n",stack[i]);
           i--;
        }
    }
    else
    {
      printf("Stack is empty !");
    }    
}

int main()
{
    int stack[MAX], choice, element;
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
          case 1:
          printf("Enter element to be push: ");
          scanf("%d", &element);
          Push_element(stack,element);
          break;

          case 2:
          Pop_element(stack);
          break;
          
          case 3:Display(stack);
          break;

          case 4: printf("%d",stack[1]);
          exit(0);
          break;

          default:
          break;
        }
    }
    return 0;
}