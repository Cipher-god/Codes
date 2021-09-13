#include <stdio.h>

void Is_number_pallindrome(int num){
int x=num;
int reverse = 0; 
   
while(num!= 0)
{
    reverse =reverse *10 + num % 10;
    num=num/10;
}
printf("\nReverse value is : %d",reverse);
if (x==reverse)
{
    printf("\nThe entered no. is pallindrome !");
    getchar();
}

else
{
    printf("\nThe entered no. is not a pallindrome !");
    getchar();
}

}

int main()
{
int a, i;
printf("- - - - - - - Check NO. IS Pallindrome OR NOT - - - - - - - - \n\n");

printf("Enter a no. : ") ;
scanf("%d",&a);

Is_number_pallindrome(a);

getchar();
    
return 0;
}