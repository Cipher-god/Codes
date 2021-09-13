#include <stdio.h>

// float Average(int a,int b)
// {
//   printf("\nEnter 1.. no. : ");
//   scanf("%d",&a);
//   printf("\nEnter 2.. no. : ");
//   scanf("%d",&b);

//   return (float)(a+b)/2 ;

// }

// float Divide(int a, int b)
// {
//   printf("\nEnter 1.. no. : ");
//   scanf("%d", &a);
//   printf("\nEnter 2.. no. : ");
//   scanf("%d", &b);

//   return (float)a / b;
// }
float Average(float a,float b,float c)
{
  printf("\nEnter 1.. no. : ");
  scanf("%f", &a);
  printf("\nEnter 2.. no. : ");
  scanf("%f", &b);
  printf("\nEnter 3.. no. : ");
  scanf("%f", &c);

  return ((a+b+c)/3.0);

}

void HelloGa(float (*ptr)(float,float,float))
{
  float a, b, c;
  printf("Hello User Good After Noon\n");
  printf("Average of given 3 numbers  : %0.2f\n", ptr(a,b,c));
}

void HelloEv(float (*ptr)(float,float,float))
{
  float a,b,c;
  printf("Hello User Good Evening\n");
  printf("Average of given 3 numbers  : %0.2f\n", ptr(a,b,c));
}

int main()
{
  printf("- - - - - - Call back Functions - - - - - - - - \n\n");
  float (*p)(float,float,float) = NULL;
  // p = Average;                  //First address of Average function
  // HelloEv(Average);

  p = NULL; // Then HOlDs NULL value which means it doesn't store a valid object
  p = Average;

  HelloGa(p); // NOw pointer holds Divide function

  getchar();
  getchar();
  return 0;
}