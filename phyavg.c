#include<stdio.h>
int main()
{

int i,n;
float ae[10];
float a[10],avg,sum=0,ab;

printf("Enter how many no.'s are in question: ");
scanf("%d",&n);

printf("Now Enter correct %d values :\n",n);

for (i = 0; i < n; i++)
{
    scanf("%f",&a[i]);
}
for ( i = 0; i < n; i++)
{
    sum=sum+a[i];
}

avg=sum/(float)n;

printf("\nTHE Average is %0.3f",avg);

printf("\nAbsolute error of each observation is :\n");
for ( i = 0; i < n; i++)
{
    ae[i]=avg-a[i];
    printf("n%d = %0.2f - %0.2f = %0.2f \n",i+1,avg,a[i],ae[i]);
    
}

sum=0;
for ( i = 0; i < n; i++)
{  
    if(ae[i]<0)
    {
        ae[i]=ae[i]*-1;
    }
    sum = sum + ae[i];
} 

printf("\nThe sum is %0.2f \n",sum);
ab=sum/n;

printf("\nNow Average absolute error is : %0.3f",ab);

printf("\nNow Relative error is : %0.4f",ab/avg);

printf("\nFinally the Perentage error is : %0.2f %c",(ab/avg)*100,'%');




}