#include <stdio.h>
#include <stdlib.h>
int main()
{
 
char *p;
int n, i=0;

printf("\n--------------Welcome To ABC Pvt. Ltd. Company Employess--------------\n");

while (i<3)
{
printf("\nEmployee %d. \nEnter no. of characters in your id: ",i+1);
scanf("%d",&n);

p=(char *) malloc ((n+1)*sizeof(int));
printf("Enter Your Id: ");
scanf("%s",p);
printf("YOur id is : %s\n",p);
free(p);

i++;
}


return 0;
}