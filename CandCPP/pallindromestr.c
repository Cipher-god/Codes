#include <stdio.h>
#include <string.h>

int main()
{
    char str[10];
    int i;
    int one = 0;
    
    printf("   \nEnter a string: ");
    gets(str);

    int j = strlen(str) - 1;
    
    for ( i = 0; i < strlen(str); i++)
    {
        if(str[i] == str[j])
        {
            j --;
            one = 1;
        }
        else
        {
           j --;
           one = 0;
        }    
    }

    if (one)
    {
        printf("  \nGiven string is pallindrome !");
    }
    else
    {
        printf("  \nGiven string is not pallindrome!");
    } 
    
    
    
    return 0;
}