#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
char * replaceWord(const char* s, const char* replace,const char* new)
{
  char * result;
  int i, count = 0;
  int newL = strlen(new);
  int replaceL = strlen(replace); 

  // Counting the number of occurences of old word in string text
  for ( i = 0;s[i] != '\0'; i++)
  {
     if(strstr(&s[i],replace) == &s[i])
     { 
       count++;
       // Jumping to index after the old word
       i += replaceL - 1;
     }
  }
  result = (char *) malloc (i + count * (newL - replaceL) + 1);
  
  i = 0;
  while (*s)
  {
     // Compare substring with result
     if(strstr(s, replace) == s)
     {
       strcpy(&result[i], new);
       i += newL;
       s += replaceL;
     }

     else 
     result[i++] = *s++;
  }
  result[i] = '\0';
  return result;
  
}
int main()
{
  char str[] = "Hello <|name|> Nice To Meet You\n\n\n";
  printf("Default Greet : %s",str);
  printf("Enter Your Name Homie : ");
  char st2[10];
  gets(st2);
  
  printf("\n\n\n");
  char * newstr  = replaceWord(str,"<|name|>",st2);
  printf("\n\n%s",newstr);
  
  char  strtemp[20];
  gets(strtemp);

  getch();
 
  return 0;
}