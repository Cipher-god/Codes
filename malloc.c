#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,  valid=0;
    char choice;
    int *p;

    printf("Enter how many people are there: ");
    scanf("%d", &n);

    p = (int *)malloc(n * sizeof(int));

    printf("Enter Their age one by one :\n ");
    for (int i = 0; i < n; i++)
    {
        printf("%d age: ",i+1);
        scanf("%d", &p[i]);

        if (p[i]>=18)
        {
            valid++;
        }
        
    }
    printf("Only %d people  are valid  for voting",valid);

    free(p);
    printf("\nNow selected peopele make your choice\n");
    printf("Press b for (BJP) or Press c for (INC) \n");

    for (int i = 0; i < valid; i++)
    {
        printf("Enter %d candidate :",i+1);
        scanf("%c",&choice);
    }
    


    return 0;
}