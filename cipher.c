#include <stdio.h>
#include<string.h>
#include <stdlib.h>
char * encryptTxt(char temp[],int shift)
{
    char * result = NULL;
    int l = strlen(temp);
    result = (char *) malloc (l * sizeof(char));

    for ( int i = 0; i < l; i++)
    {
        result[i] = ((temp[i] + shift - 65) % 26 + 65);
    }
    return result;
}
int main()
{
  char txt[30];
  printf("Enter text : ") ;
  scanf("%s",txt);
  int s = 4;
 
  char * cipher = (char *) malloc (30*sizeof(char));
  cipher = encryptTxt(txt,s);
  printf("%s",cipher);
 
  return 0;
}
/*
A 17+65
*/
/*
A B C D E
0 1 2 3 4
*/