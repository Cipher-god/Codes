#include <stdio.h>
#include<string.h>

int i;

void praser(char *s)
{
    int in = 0 ,size=1;
    int index = 0;

    for (i = 0; s[i]!='\0' ; i++)
    {
        size++;
        if (s[i] == '<')
        {
            in = 1;
            continue;
        }

        else if(s[i]=='>')
        {
            in = 0;
            continue;
        }
        if(in== 0)
        {
            s[index] =s[i];
            index ++;
        }

        
    }s[index]='\0'; 
    
  
    //Removing space from start
    // while (s[0] ==' ')
    // {
    //     for ( i = 0; s[i]!='\0'; i++)
    //     {
    //       s[i]=s[i+1];
    //     }
        
    // }
    
    //Removing spaces from end
    // while(s[strlen(s)-1]==' ')
    // {
        
    //   s[strlen(s)-1] = '\0';
        
    // }
    // printf("\n%d\n",size);
}

int main()
{

    char h1[] ="<h1>   Heading 1  </h1>";
    
    printf("\nPrevious string : %s",h1);
    praser(h1);
    
    printf("\nNEW string :__%s__",h1) ;
    return 0;
}