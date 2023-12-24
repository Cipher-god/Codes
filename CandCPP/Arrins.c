#include <stdio.h>
#include<conio.h>
#define D 5
int main()                                //  Array  INsertion  //
{
    int a[D], i, n, m, no = 0;
    
 printf("- - - - - - - - Insertion of Array - - - - - - - - - - - \n\n");
    printf("Enter Array Elements: ");
    for (i = 0; i < D; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter the element to be replace: ");
    scanf("%d", &n);
    printf("\nNow Enter the new value: ");
    scanf("%d", &m);

    for (i = 0; i < D; i++)
        if (n == a[i])
        {
            printf("The New Array is :\n");
            for (i = 0; i < D; i++)
            {
                if (n == a[i])
                {
                    a[i] = m;
                }
                printf("%d\n", a[i]);
            }
        }
        else
            no++;

    if (no > 4)
    {
        printf("%d is not in Array", n);
    }

    getch();
}