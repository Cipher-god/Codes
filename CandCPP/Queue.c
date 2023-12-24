#include <stdio.h>
#include <stdlib.h>
#define max 5
int q[max],front = -1, rear = -1;

void Enqueue()
{
    int data;
    if(rear == max-1)
    {
        printf("Not possible (Queue OVerFlow)!");
    }
    else
    {
       if(front == -1)
       {
          front = 0;
       }
       printf("Enter element : ");
       scanf("%d",&data);
       rear++;
       q[rear] = data;
    }
    
}
void Dequeue()
{
    if(front == -1 || front > rear)
    {
        printf("Not possible (Queue Underflow)!");
    }
    else
    {
        printf("Dequeued element : %d",q[front]);
        front++;
    }
    
}
void Display()
{ int i;
   if(front == -1)
   {
     printf("Queue is Empty !");
   }
   else
   {
     printf("Elements : ");
     for ( i = front; i <= rear; i++)
     {
        printf("\t%d",q[i]);
     }  
    }
   
}
//Main function starts from here |>>>>>>>>>>>>>>>>>>>>>>>>
int main()
{
  int choice;
  printf("\nPress : \n");
  printf("1. Enqueue or Insert element \n");
  printf("2. Dequeue or delete element \n");
  printf("3. to Display \n");
  printf("4. to (EXIT)!\n");

  while (1)
  {
    scanf("%d",&choice);
    switch (choice)
    {
     case 1:Enqueue();
     break;

     case 2:Dequeue();
     break;
     
     case 3:Display();
     break;

     case 4:printf("%d",q[1]);
     exit(0);
     break;

     default:
     break;
    }
  }
  
  return 0;
}