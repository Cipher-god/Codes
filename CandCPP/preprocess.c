#include <stdio.h>
#define cube(x) x*x*x

int main()
{
int a=10;

printf("--------------DATE AND TIME--------------\n\n");

printf("\t\t%s\n",__DATE__);
printf("\t\t%s\n",__TIME__);

// Kindly   start    code    from      below  :
printf("\nIs my program compile from ANSCI STANDARD (TRUE 1 & FALSE 0):  %d",__STDC__);
printf("\nMy PROGRAM file name is  %s",__FILE__);
printf("\nLINE No. : %d ",__LINE__);


return 0;
}