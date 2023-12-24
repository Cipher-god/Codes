#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//  Replace words function is here
char * replaceWords(char  *str,char *oldWord,char *newWord)
{

    char *replace;
    int i,count =0;
    int newWordl = strlen(newWord);
    int oldWordl = strlen(oldWord);

    //Counting the old words in the Bill

    for ( i = 0; str[i] !='\0'; i++)
    {
        if (strstr(&str[i], oldWord) == &str[i])
        {
            count++;

            //JUmp over old word
            i= i + oldWordl - 1;
           
        }
        
    }
    

    //Making New string to fit in the replace to new

    replace = (char *) malloc (i+ count * (newWordl - oldWordl) + 1);
    
    i= 0;

    while (*str)
    {
        //Comparing the substring with replace
        if(strstr(str, oldWord)== str)
        {
           strcpy(&replace[i], newWord);
           i+= newWordl;
          str+= oldWordl;  //Jumping
            
        }

        else
        {
            replace[i] = *str;
            i += 1;
          str += 1;
              
        }

    }
    replace[i] = '\0';

      
    return replace;

}

//  Main Function starts from here
int main()
{
  FILE *fptr = NULL;
  FILE *fptr22 = NULL;
  char string[249], *newstr;
  int i = 0;

  fptr = fopen("Test.txt","r");
  
  while((string[i] = getc(fptr)) != EOF)
  {
  i++;}
  string[i] = '\0';
  
  printf("Sample bill is : \n");
  printf("%s",string);

  newstr = replaceWords(string,"<<name>>","John_prc"); 
  newstr = replaceWords(newstr,"<<address>>","NYC_R.66");
  newstr = replaceWords(newstr,"<<product>>","OPPO_RENO_2");
  newstr = replaceWords(newstr,"<<years>>","4_years");

  fptr22 = fopen("Text_bill.txt","w");
  fprintf(fptr22,"%s",newstr);
  
  getchar();
  getchar();
  fclose(fptr);
  fclose(fptr22);
  return 0;
}