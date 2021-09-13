#include <stdio.h>

int main()
{
    printf("\n--------Calculator--------(type e to exit)ONLY PLUS MINUS\n");

    static int number1, number2;
    char character;
    int i;

    for(i = 0; i<3; i++)
    {
        scanf("%d%c%d",&number1,&character,&number2);

        if (character == '+')
        {
        printf("%d\n",number1+number2);
        getchar();
        }
        else if(character == '-')
        {
         printf("%d\n",number1-number2);
         getchar();
        }
        
    }

}