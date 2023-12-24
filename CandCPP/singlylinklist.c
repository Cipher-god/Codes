#include <stdio.h>
#include <stdlib.h>
int last = 0;
struct linked_list
{
  int info;
  struct linked_list *link;
};
typedef struct linked_list NODE;

/*   func() that insert node in an empty list    */
NODE *Empt_list(NODE *start, int data)
{
  NODE *temp;
  temp = (NODE *)malloc(sizeof(NODE));

  temp->info = data;
  temp->link = start;
  start = temp;
  return start;
}
/*   func() that insert node in the begining of list */
NODE *Ins_begin(NODE *start, int data)
{
  NODE *temp;
  temp = (NODE *)malloc(sizeof(NODE));
  temp->info = data;
  temp->link = start;
  start = temp;
  return start;
}

/*   func() that insert node in the end of list    */
NODE *Ins_end(NODE *start, int data)
{
  NODE *p, *temp;
  temp = (NODE *)malloc(sizeof(NODE));
  temp->info = data;
  p = start;

  while (p->link != NULL)
  {
    p = p->link;
  }
  p->link = temp;
  temp->link = NULL;

  return start;
}
/*   func() that insert node at nth poisition of list  */
NODE *Ins_nthpoisition(NODE *start, int data, int poisition)
{
  int i;
  NODE *temp, *p;
  temp = (NODE *)malloc(sizeof(NODE));
  temp->info = data;

  if (poisition == 1)
  {
    temp->link = start;
    start = temp;
    return start;
  }
  p = start;
  for (i = 1; i < poisition - 1 && p != NULL; i++)
  {
    p = p->link;
  }
  if (p == NULL)
  {
    printf("Task cannnot be Done !(less than %d in list)", poisition);
    getchar();
  }
  else
  {
    temp->link = p->link;
    p->link = temp;
  }
  return start;
}

NODE *delete_begin(NODE *start)
{
  NODE *temp = start;
  start = (*start).link;
  free(temp);
  temp = NULL;
  return start;
}
NODE *delete_end(NODE *start)
{
  NODE *p = start;
  NODE *temp = NULL;

  while (p->link->link != NULL)
  {
    p = p->link;
  }
  temp = p->link;
  p->link = NULL;
  free(temp);
  temp = NULL;
  return start;
}

NODE *delete_nth_poistion(NODE *start, int poisition)
{
  int i;
  NODE *p = NULL;
  NODE *p2 = NULL;
  NODE *temp = NULL;
  p = start;
  if (poisition == 1)
  {
    start = start->link;
    free(temp);
    temp = NULL;
    return start;
  }
  else if (last == poisition)
  {
    while (p->link->link != NULL)
    {
      p = p->link;
    }
    temp = p->link;
    p->link = NULL;
    free(temp);
    temp = NULL;
    last = 0;
    return start;
  }
  else
  {
    for (i = 1; i != poisition + 1 && p != NULL; i++)
    {

      if (i == poisition - 1)
      {
        temp = p->link;
        p2 = p;
      }
      p = p->link;
    }
    if (p == NULL)
    {
      printf("Task cannnot be Done !(less than %d in list)", poisition);
      getchar();
      getchar();
    }
    else
    {
      p2->link = p;
      free(temp);
      temp = NULL;
    }
    return start;
  }
}
void display(NODE *start)
{ 
  int choice;
  last = 0;
  NODE *p;
  if (start == NULL)
  {
    printf("The List is empty !");
  }
  else
  {
    p = start;
    printf("In which you want list Press (1)for forward & (2)for reverse!");
    scanf("%d",&choice);
    while (p != NULL)
    {
      printf("%d\t", p->info);
      p = p->link;
      last++;
    }
    printf("\nlast : %d", last);
    getchar();
    getchar();
    printf("\n");
  }
}

int menu(void)
{
  int choice;
  printf("Press: \n");
  printf("1. to insert in an Empty list \n");
  printf("2. to insert at begining\n");
  printf("3. to insert at End\n");
  printf("4. to insert at nth poisition\n");
  printf("5. to Display list\n");
  printf("8. to delete node at nth poistion\n");
  printf("9. to delete first node\n");
  printf("10.to delete last node\n");
  printf("6. to end the program ! \n");
  scanf("%d", &choice);
  return choice;
}
//           Main(  )      func starts from here       |>
int main()
{
  NODE *start = NULL;
  int data, position;

  while (1)
  {
    system("cls");
    switch (menu())
    {
    case 1:
      if (start != NULL)
      {
        printf("The List is not empty \n");
        break;
      }
      printf("Enter element : ");
      scanf("%d", &data);
      start = Empt_list(start, data);
      break;

    case 2:
      printf("Enter element : ");
      scanf("%d", &data);

      start = Ins_begin(start, data);
      break;

    case 3:
      printf("Enter element : ");
      scanf("%d", &data);

      start = Ins_end(start, data);
      break;

    case 4:
      printf("Enter element : ");
      scanf("%d", &data);
      printf("Enter Poisition: ");
      scanf("%d", &position);

      start = Ins_nthpoisition(start, data, position);
      break;

    case 5:
      display(start);
      break;

    case 8:
      printf("Enter poisition: ");
      scanf("%d", &position);
      start = delete_nth_poistion(start, position);
      break;

    case 9:
      start = delete_begin(start);
      printf("First node is deleted !");
      getchar();
      getchar();
      break;

    case 10:
      start = delete_end(start);
      break;

    case 6:
      goto end;

    default:
      printf("Invalid choice! (try again)");
      getchar();
      getchar();
      break;
    }
  }

  end:
  free(start);
  start = NULL;
  getchar();
  getchar();
  return 0;
}