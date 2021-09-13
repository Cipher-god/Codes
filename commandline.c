#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char *argv[])
{   
    char *str;
    char *nwstr;
    int n1,n2;


    if (argc > 2)
    {

    str = argv[1];
    nwstr = argv[1];
    
    
    n1= atoi(argv[2]);        //atoi() converts the "stringintger" into an intger
    n2= atoi(argv[3]);
       
    }

    if (strcmp(str,"add")== 0)
    {
        printf("%d",n1+n2);
    }

    else if (strcmp(str,"sub")== 0)
    {
        printf("%d",n1-n2);
    }

    else if (strcmp(str,"divide")== 0)
    {
        printf("%d",n1/n2);
    }
    else if (strcmp(str,"product")== 0)
    {
        printf("%d",n1*n2);
    }
    
    printf("NO. of arguments %d ",argc);
    if(argc > 2)
    printf("argument name : %s",nwstr);

    return 0;
}