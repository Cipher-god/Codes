#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n,m;
  char str[]="Enter a no. : ";
  char str2[]="Given no. is ";
  printf("Enter a no. : ");
  scanf("%d",&n);
  printf("Given no. is %d",n);

  enum deleteorend  {delete,end};
  
  FILE *p = NULL;
  p = fopen("history.txt","a");
  fprintf(p,"\n%s\t%s",__DATE__,__TIME__);
  fprintf(p,"\n%s%d",str,n);
  fprintf(p,"\n%s%d\n",str2,n);
  fclose(p);

  printf("\nEnter 0 to delete history or 1 to end: ");
  scanf("%d",&m);
  if(m == delete)
  {
   p = fopen("history.txt","w");
   fputs("------History------",p);
   fclose(p);
  }
  else if(m == end)
  {
   fclose(p);
  }

  return 0;
}