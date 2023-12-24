#include <stdio.h>
int main()
{
    int indays;
    int y, m ,d;
     
    printf("Enter no. of days: ");
    scanf("%d",&indays);
    int reminder = (indays%365);
    y = indays/365;
    m = reminder/ 30;
    d = reminder % 30;

    printf("%d Year(s) ",y);
    printf("\n%d Month(s)",m);
    printf("\n%d Days(s)",d);
 
    
    return 0;
}