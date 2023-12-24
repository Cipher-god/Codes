#include <stdio.h>
#include <stdlib.h>
#define MAX 10
struct link_list
{
  char str[MAX];
  int data;
  struct link_list *link;
};
typedef struct link_list NODE;

NODE *Ins_begin(NODE *start, char str[],int data)
{
  int i = 0;
  NODE *temp = (NODE *)malloc(sizeof(NODE));
  temp->data = data;
  temp->link = start;
  while (str[i] != '\0')
  {
    temp->str[i] = str[i];
    i++;
  }
  temp->str[i] = '\0';
  start = temp;
  return start;
}
void display_list(NODE *start)
{
  NODE *p = start;
  printf("String part:\n");
  while (p != NULL)
  {
    printf("%s\t",p->str);
    p = p->link;
  }printf("\nInteger part:\n");
  
  p = start;
  while (p!= NULL)
  {
    printf("%d\t",p->data);
    p= p->link;
  } 
}
int main()
{
  NODE *start = NULL;
  int choice,data;
  char str[MAX];
  
  while (1)
  { 
    printf("\nPress : \n");
    printf("1. to insert node in list at begining\n");
    printf("2. to display the list !\n");
    printf("3. to end the program (EXIT) !\n");
    scanf("%d", &choice);
    switch (choice)
    {
      case 1:
      printf("Enter string data: ");
      getchar();
      gets(str);
      printf("Now Enter int data: ");
      scanf("%d",&data);
      start = Ins_begin(start, str,data);
      break;

      case 2:
      if (start == NULL)
      {
        printf("List is empty !");
        getchar();
        getchar();
      }
      else
      {display_list(start);}
      break;

      case 3:
      exit(0);
      break;

      default:
      printf("Invalid choice (Try again)!");
      break;
    }
  }

  return 0;
}