#include <stdio.h>
#include <stdlib.h>

typedef struct  linked_list
{
  int data;
  struct linked_list *next;
}NODE;
void create(NODE *temp)
{
  printf("Enter a no. : ");
  scanf("%d",&temp->data);
  if(temp->data == 0)
  {
    temp->next = NULL;
  }
  else
  {
    temp->next = (NODE *) malloc (sizeof(NODE));
    create(temp->next);
  }
}
void display(NODE *temp)
{
  if(temp->next != NULL)
  {
    printf("%d---> ",temp->data);

    if(temp->next->next == NULL)
    printf("%d",temp->next->data);

    display(temp->next);
  }
}
int main()
{
  printf("(!!! ENTER '0' TO END !!!)\n\n");
  NODE *start = NULL;
  void create(NODE *p);
  void dislay(NODE *p);
  start = (NODE  *) malloc (sizeof(NODE));
  create(start);
  printf("\n");
  display(start);
  
  return 0;
}