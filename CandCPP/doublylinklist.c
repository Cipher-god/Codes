#include <stdio.h>
#include <stdlib.h>
struct double_link_list
{
  int info;
  struct double_link_list *next;
  struct double_link_list *previous;
};
typedef struct double_link_list NODE;

NODE *Ins_inemptlist(NODE *start, int data)
{
  NODE *temp = NULL;
  temp = (NODE *)malloc(sizeof(NODE));
  temp->info = data;
  temp->next = NULL;
  temp->previous = NULL;
  start = temp;
  return start;
}

NODE *Ins_atbegin(NODE *start, int data)
{
  NODE *temp = NULL;
  temp = (NODE *)malloc(sizeof(NODE));
  if (start == NULL)
  {
    temp->info = data;
    temp->next = NULL;
    temp->previous = NULL;
    start = temp;
    return start;
  }
  else
  {
  temp->previous = NULL;
  temp->info = data;
  temp->next = start;
  start->previous = temp;
  start = temp;
  return start;
  }
}
NODE *Ins_atend(NODE *start ,int data)
{
  NODE *temp = (NODE *) malloc (sizeof(NODE));
  NODE *p = start;
  while (p->next != NULL)
  {   
    p = p->next;
  }
  p->next = temp;
  temp->previous = p;
  temp->info = data;
  temp->next = NULL;
  return start;
}
NODE *Ins_atnthpoisititon(NODE *start,int data,int poisition)
{
  int i;
  NODE *temp , *p;
  temp = (NODE *) malloc (sizeof (NODE));
  temp->info = data;
  if(poisition == 1)
 {
   if (start == NULL)
  {
    temp->next = NULL;
    temp->previous = NULL;
    start = temp;
    return start;
  }
  else
  {
    temp->previous = NULL;
    temp->next = start;
    start->previous = temp;
    start = temp;
    return start; 
  }
 } 
 p =start;
 for ( i = 1;i<poisition -1 && p!= NULL; i++)
 {
   p = p->next;
 }
 if(p == NULL)
 printf("There are less than %d elements in List !",poisition);
 else
 {
   temp->previous = p;
   temp->next = p->next;
   if(p->next != NULL) 
    p->next->previous = temp;
   
   p->next = temp;
 }
 return start;
}
NODE *delete_begin(NODE *start)
{
  if(start->next == NULL)
  {
  free(start);
  start = NULL;
  return start;
  }
  else
  {
  NODE *temp = start;
  temp->next->previous = NULL;
  start = temp->next;
  free(temp);
  temp = NULL;
  return start;
  }
  
}
NODE *delete_end(NODE *start)
{
  NODE *p = start;
  while (p->next != NULL)
  {
    p = p->next;
  }
  p->previous->next = NULL;
  free(p);
  p = NULL;
  return start;
}
NODE *delete_nthpoisition(NODE *start,int poisition)
{
  int i;
  NODE *p = start;
  if(poisition == 1)
  {
   if(start->next == NULL)
   {
   free(start);
   start = NULL;
   return start;
   }
    else{
    p->next->previous = NULL;
    start = p->next;
    free(p);
    p = NULL;
    return start;}
  }
  else{
  for ( i = 1; i <poisition && p!=NULL; i++)
  {
    p = p->next;
  }
  if(p->next == NULL)
  {
    p->previous->next = NULL;
  }
  else
  {
  p->previous->next = p->next;
  p->next->previous = p->previous;
  }
  free(p);
  p =NULL;
  return start;}
}
void Display(NODE *start)
{
  int c;
  NODE *p = NULL;
  printf("In which order you want list Press(1)for forward & (2)for reverse!: ");
  scanf("%d", &c);
  if (c == 1)
  { p =start;
    printf("List: ");
    while (p != NULL)
    {
      printf("%d\t", p->info);
      p = p->next;
    }
    getchar();
    getchar();
  }
  else
  {p =start;
   while (p->next != NULL)
   {
     p = p->next;
   }
   printf("List : ");
   while (p != NULL)
   {
     printf("%5d",p->info);
     p = p->previous;
   }
    getchar();
    getchar();
  }
}
int option(void)
{ int choice;
  printf("\nPress : \n");
  printf("1. to insert node in an empty doubly list\n");
  printf("2. to insert node at begining of doubly list\n");
  printf("3. to insert node at the end  of doubly list\n");
  printf("4. to insert node at nth poistion of \"  list\n");
  printf("5. to display the doubly list\n");
  printf("6. to delete node at begining of doubly list\n");
  printf("7. to delete node at the end  of  \"     list\n");
  printf("8. to delete node at nth poistion of \"  list\n"); 
  printf("9. to end the program (EXIT)\n");
  scanf("%d", &choice);
  return choice;
}

// main(  ) function starts from here |>
int main()
{
  NODE *start = NULL;
  int data,poisition;
  while (1)
  { system("cls");
    switch (option())
    {
    case 1:
    if (start == NULL)
    {
      printf("Enter element : ");
      scanf("%d", &data);
      start = Ins_inemptlist(start, data);
    }
    else
    printf("List is not empty !");
    break;

    case 2:
    printf("Enter element : ");
    scanf("%d", &data);
    start = Ins_atbegin(start, data);
    break;

    case 3:
    printf("Enter element : ");
    scanf("%d",&data);
    start = Ins_atend(start,data);
    break;

    case 4: 
    printf("Enter element : ");
    scanf("%d",&data);
    printf("Enter poisition : ");
    scanf("%d",&poisition);
    start = Ins_atnthpoisititon(start,data,poisition);
    break;

    case 5:
    if (start == NULL){
    printf("List is empty !");
    getchar();
    getchar();}
    else
    {
     printf("List : ");
     Display(start);
    }
    break;

    case 6:
    start = delete_begin(start);
    break;
    
    case 7:
    start = delete_end(start);
    break;

    case 8:
    printf("Enter poisition : ");
    scanf("%d",&poisition);
    start = delete_nthpoisition(start,poisition);
    break;

    case 9:
    exit(0);
    break;

    default:
    printf("Invalid choice (Try again)!");
    getchar();
    getchar();
    break;
    }
  }

  return 0;
}