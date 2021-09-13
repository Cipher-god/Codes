#include <stdio.h>
int main()
{

  FILE *p = fopen("text.txt","r");

  char c;
  int  i;

  while ((c=getc(p)) != EOF)
  {
    printf("%c",c);
  }
  
  


 
 fclose(p) ;
 return 0;
}