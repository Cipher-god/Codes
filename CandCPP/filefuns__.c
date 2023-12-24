#include <stdio.h>
// #include <stdlib.h>
int main()
{
  FILE *p = NULL;
  p = fopen("Text_bill.txt","r+");
 
  char str[45];
  int i = 0,n = 0;

  fgets(str,36,p);

  printf("\nPrevious File : \n%s",str);
  printf("\tBytes of current file %d",ftell(p));
  while (str[i] != '{')
  {
    n++;
    i++;
  }
  fseek(p,n,SEEK_SET);
  fputs("C Language Thats",p);
  rewind(p);
  fgets(str,40,p);
  printf("\n\nNew File : \n%s",str);
  printf("\tBytes of current file %d",ftell(p));
  
  fclose(p);
  return 0;
}